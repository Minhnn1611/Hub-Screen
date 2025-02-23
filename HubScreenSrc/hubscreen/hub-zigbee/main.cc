
#include <vector>
#include <queue>
#include <mutex>
#include <condition_variable>
#include <string.h>
#include "mqtt.hh"
#include "uart.hh"
#include "config.hh"

#include "zigbee.pb.h"
#include "typedef.pb.h"

#define MAX_BUFFER 255

struct Event {
    enum EventType { UART_DATA_RECEIVED, MQTT_MESSAGE_RECEIVED } type;
    const std::vector<uint8_t> data;
    const std::string topic;

    Event(EventType t, const std::string p, const std::vector<uint8_t>& d) : type(t), topic(p), data(d) {}
};

std::queue<Event> eventQueue;
std::mutex mtx;
std::condition_variable cv;

class HubDevice_t {
public:
    Zigbee_t zigbee;
    Buffer buff;
    Mqtt_t transport;
    Uart_t uart;

    HubDevice_t(const char *id, const char *port)
        : transport(id), uart(port) {
        this->zigbee = Zigbee_t();
        this->buff = Buffer();
	uart.connect(B115200);
    }
};

HubDevice_t hub_zigbee(DEVICE_NAME, PATH_SEZIAL);


std::vector<std::vector<uint8_t>> extract_uart(const uint8_t *input, size_t size) {
    std::vector<std::vector<uint8_t>> results;
    std::vector<uint8_t> current_message;
    bool in_message = false;
    size_t consecutive_255_count = 0;

    for (size_t i = 0; i < size; ++i) {
        if (input[i] == 0xFF) {
            consecutive_255_count++;
            if (consecutive_255_count == 2) {
                if (in_message && !current_message.empty()) {
                    results.push_back(current_message);
                    current_message.clear();
                }
                in_message = true;
                consecutive_255_count = 0; // Reset đếm sau khi gặp cặp 255, 255
            }
        } else {
            consecutive_255_count = 0;
            if (in_message) {
                current_message.push_back(input[i]);
            }
        }
    }

    if (!current_message.empty()) {
        results.push_back(current_message);
    }
    return results;
}

void uart_callback(const unsigned char *data, int length) {
    std::lock_guard<std::mutex> lock(mtx);

    std::vector<uint8_t> vec_data(data, data + length);
    eventQueue.push(Event(Event::UART_DATA_RECEIVED, "", vec_data));
    cv.notify_one();
    LOG_INFO("<-- " << "UART" << " : " << data);
}

void mqtt_callback(struct mosquitto *mosq, void *userdata, const struct mosquitto_message *message) {
    std::lock_guard<std::mutex> lock(mtx);
    LOG_INFO("<-- " << message->topic << " : " << message->payload);
    std::vector<uint8_t> vec_data((const uint8_t *)message->payload, (const uint8_t *)message->payload + message->payloadlen);
    eventQueue.push(Event(Event::MQTT_MESSAGE_RECEIVED, message->topic, vec_data));
    cv.notify_one();
}


void convertBufferToZigbee(HubDevice_t device){
    uint8_t zigbee_arr[MAX_BUFFER];
    memset(zigbee_arr , 0, sizeof(zigbee_arr));

    if(device.buff.sender() != User_t::Hub || device.buff.receiver() != User_t::Zigbee ) {
        return;
    }

    if(device.buff.sw_size() == 0){
	uint8_t sync[4] = {16, 1, 0xff, 0xff};
        LOG_INFO("Packet sync to zigbee");
        // start byte data
        hub_zigbee.uart.send(sync, 4);
    }

    for (int i = 0; i < device.buff.sw_size(); ++i) {
        Sw_t sw = device.buff.sw(i);

        Zigbee_t zigbee;
        SwZb_t* sw_zigbee = zigbee.mutable_sw();
        sw_zigbee->set_endpoint(sw.ep());
        sw_zigbee->set_deviceid(sw.mac());
        sw_zigbee->set_status(sw.status());
        zigbee.SerializeToArray(zigbee_arr, sizeof(zigbee_arr));

        LOG_INFO("--> " << "UART" << " : " << zigbee.DebugString() );
        // start byte data
        hub_zigbee.uart.send(zigbee_arr, zigbee.ByteSizeLong());
        // end byte data
        uint8_t end[2] = {0xff, 0xff};
        hub_zigbee.uart.send(end, 2);
    }
}

void convertZigbeeToBuffer(HubDevice_t device){
    if(device.zigbee.has_sw()){
        Buffer buffer;
        buffer.set_sender(User_t::Zigbee);
        buffer.set_receiver(User_t::Hub);
        buffer.set_cotroller(User_t::Zigbee);
	    buffer.set_mac_hub("8xff");

        uint8_t buffer_arr[MAX_BUFFER];

        // Convert SwZb_t to Sw_t and add to the buffer
        Sw_t* sw = buffer.add_sw();
        sw->set_mac(device.zigbee.sw().deviceid());
        sw->set_ep(device.zigbee.sw().endpoint());
        sw->set_status(device.zigbee.sw().status());
	    sw->set_name("switch " + std::to_string(device.zigbee.sw().endpoint()));

        buffer.SerializeToArray(buffer_arr, sizeof(buffer_arr));

        const char * topic = "hub/zigbee";
        LOG_INFO("--> " << topic << " : " << buffer.DebugString());
        device.transport.publish(topic, reinterpret_cast<const unsigned char*>(buffer_arr), buffer.ByteSizeLong());
    }
}

int main(void) {
    // Test MQTT
    __test_mqtt();
    // Test UART

    // Set MQTT
    hub_zigbee.transport.set_callback(mqtt_callback);
    hub_zigbee.transport.setup(BROKER, PORT, 45);
    hub_zigbee.transport.subscribe(SUB , 1);
    hub_zigbee.transport.connect();
    // Set UART
        uint8_t sync[4] = {16, 1, 0xff, 0xff};
        LOG_INFO("Packet sync to zigbee");
        // start byte data
        hub_zigbee.uart.send(sync, 4);

    std::vector<std::vector<uint8_t>> messages;
    while (true) {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, []{ return !eventQueue.empty(); });
        Event event = eventQueue.front();
        eventQueue.pop();
        lock.unlock();

        switch (event.type) {
		    case Event::UART_DATA_RECEIVED:
    			LOG_INFO("In received data");
                messages = extract_uart(event.data.data(), event.data.size());
                std::cout << "Extracted messages:" << std::endl;
                for (const auto& message : messages) {
                    if (!hub_zigbee.zigbee.ParseFromArray(message.data(), message.size())) {
                        std::cerr << "Failed to parse zigbee message from vector" << std::endl;
                        break;
                    }
                    convertZigbeeToBuffer(hub_zigbee);
                }
                break;

            case Event::MQTT_MESSAGE_RECEIVED:
                if (!hub_zigbee.buff.ParseFromArray(event.data.data(), event.data.size())) {
                    std::cerr << "Failed to parse protobuf message from vector" << std::endl;
                    break;
                }

                convertBufferToZigbee(hub_zigbee);
                break;

            default:
                std::cerr << "Unknown event type" << std::endl;
        }
    }

    return 0;
}
