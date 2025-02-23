// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ble.proto

#include "ble.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Ble_t::Ble_t(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sw_)*/nullptr
  , /*decltype(_impl_.sync_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct Ble_tDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Ble_tDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Ble_tDefaultTypeInternal() {}
  union {
    Ble_t _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Ble_tDefaultTypeInternal _Ble_t_default_instance_;
PROTOBUF_CONSTEXPR SwBle_t::SwBle_t(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.deviceid_)*/0u
  , /*decltype(_impl_.endpoint_)*/0u
  , /*decltype(_impl_.status_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SwBle_tDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SwBle_tDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SwBle_tDefaultTypeInternal() {}
  union {
    SwBle_t _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SwBle_tDefaultTypeInternal _SwBle_t_default_instance_;
static ::_pb::Metadata file_level_metadata_ble_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ble_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ble_2eproto = nullptr;

const uint32_t TableStruct_ble_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Ble_t, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Ble_t, _impl_.sw_),
  PROTOBUF_FIELD_OFFSET(::Ble_t, _impl_.sync_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::SwBle_t, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SwBle_t, _impl_.deviceid_),
  PROTOBUF_FIELD_OFFSET(::SwBle_t, _impl_.endpoint_),
  PROTOBUF_FIELD_OFFSET(::SwBle_t, _impl_.status_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Ble_t)},
  { 8, -1, -1, sizeof(::SwBle_t)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Ble_t_default_instance_._instance,
  &::_SwBle_t_default_instance_._instance,
};

const char descriptor_table_protodef_ble_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tble.proto\"+\n\005Ble_t\022\024\n\002sw\030\001 \001(\0132\010.SwBle"
  "_t\022\014\n\004sync\030\002 \001(\010\"=\n\007SwBle_t\022\020\n\010deviceID\030"
  "\017 \001(\r\022\020\n\010endpoint\030\020 \001(\r\022\016\n\006status\030\021 \001(\010b"
  "\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_ble_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ble_2eproto = {
    false, false, 127, descriptor_table_protodef_ble_2eproto,
    "ble.proto",
    &descriptor_table_ble_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_ble_2eproto::offsets,
    file_level_metadata_ble_2eproto, file_level_enum_descriptors_ble_2eproto,
    file_level_service_descriptors_ble_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ble_2eproto_getter() {
  return &descriptor_table_ble_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ble_2eproto(&descriptor_table_ble_2eproto);

// ===================================================================

class Ble_t::_Internal {
 public:
  static const ::SwBle_t& sw(const Ble_t* msg);
};

const ::SwBle_t&
Ble_t::_Internal::sw(const Ble_t* msg) {
  return *msg->_impl_.sw_;
}
Ble_t::Ble_t(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Ble_t)
}
Ble_t::Ble_t(const Ble_t& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Ble_t* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sw_){nullptr}
    , decltype(_impl_.sync_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_sw()) {
    _this->_impl_.sw_ = new ::SwBle_t(*from._impl_.sw_);
  }
  _this->_impl_.sync_ = from._impl_.sync_;
  // @@protoc_insertion_point(copy_constructor:Ble_t)
}

inline void Ble_t::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sw_){nullptr}
    , decltype(_impl_.sync_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Ble_t::~Ble_t() {
  // @@protoc_insertion_point(destructor:Ble_t)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Ble_t::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.sw_;
}

void Ble_t::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Ble_t::Clear() {
// @@protoc_insertion_point(message_clear_start:Ble_t)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.sw_ != nullptr) {
    delete _impl_.sw_;
  }
  _impl_.sw_ = nullptr;
  _impl_.sync_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Ble_t::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .SwBle_t sw = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_sw(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool sync = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.sync_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Ble_t::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Ble_t)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .SwBle_t sw = 1;
  if (this->_internal_has_sw()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::sw(this),
        _Internal::sw(this).GetCachedSize(), target, stream);
  }

  // bool sync = 2;
  if (this->_internal_sync() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_sync(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Ble_t)
  return target;
}

size_t Ble_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Ble_t)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .SwBle_t sw = 1;
  if (this->_internal_has_sw()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.sw_);
  }

  // bool sync = 2;
  if (this->_internal_sync() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Ble_t::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Ble_t::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Ble_t::GetClassData() const { return &_class_data_; }


void Ble_t::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Ble_t*>(&to_msg);
  auto& from = static_cast<const Ble_t&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Ble_t)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_sw()) {
    _this->_internal_mutable_sw()->::SwBle_t::MergeFrom(
        from._internal_sw());
  }
  if (from._internal_sync() != 0) {
    _this->_internal_set_sync(from._internal_sync());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Ble_t::CopyFrom(const Ble_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Ble_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ble_t::IsInitialized() const {
  return true;
}

void Ble_t::InternalSwap(Ble_t* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Ble_t, _impl_.sync_)
      + sizeof(Ble_t::_impl_.sync_)
      - PROTOBUF_FIELD_OFFSET(Ble_t, _impl_.sw_)>(
          reinterpret_cast<char*>(&_impl_.sw_),
          reinterpret_cast<char*>(&other->_impl_.sw_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Ble_t::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ble_2eproto_getter, &descriptor_table_ble_2eproto_once,
      file_level_metadata_ble_2eproto[0]);
}

// ===================================================================

class SwBle_t::_Internal {
 public:
};

SwBle_t::SwBle_t(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SwBle_t)
}
SwBle_t::SwBle_t(const SwBle_t& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SwBle_t* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.deviceid_){}
    , decltype(_impl_.endpoint_){}
    , decltype(_impl_.status_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.deviceid_, &from._impl_.deviceid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.status_) -
    reinterpret_cast<char*>(&_impl_.deviceid_)) + sizeof(_impl_.status_));
  // @@protoc_insertion_point(copy_constructor:SwBle_t)
}

inline void SwBle_t::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.deviceid_){0u}
    , decltype(_impl_.endpoint_){0u}
    , decltype(_impl_.status_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SwBle_t::~SwBle_t() {
  // @@protoc_insertion_point(destructor:SwBle_t)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SwBle_t::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SwBle_t::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SwBle_t::Clear() {
// @@protoc_insertion_point(message_clear_start:SwBle_t)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.deviceid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.status_) -
      reinterpret_cast<char*>(&_impl_.deviceid_)) + sizeof(_impl_.status_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SwBle_t::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 deviceID = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 120)) {
          _impl_.deviceid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 endpoint = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 128)) {
          _impl_.endpoint_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool status = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 136)) {
          _impl_.status_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SwBle_t::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SwBle_t)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 deviceID = 15;
  if (this->_internal_deviceid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(15, this->_internal_deviceid(), target);
  }

  // uint32 endpoint = 16;
  if (this->_internal_endpoint() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(16, this->_internal_endpoint(), target);
  }

  // bool status = 17;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(17, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SwBle_t)
  return target;
}

size_t SwBle_t::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SwBle_t)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 deviceID = 15;
  if (this->_internal_deviceid() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_deviceid());
  }

  // uint32 endpoint = 16;
  if (this->_internal_endpoint() != 0) {
    total_size += 2 +
      ::_pbi::WireFormatLite::UInt32Size(
        this->_internal_endpoint());
  }

  // bool status = 17;
  if (this->_internal_status() != 0) {
    total_size += 2 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SwBle_t::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SwBle_t::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SwBle_t::GetClassData() const { return &_class_data_; }


void SwBle_t::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SwBle_t*>(&to_msg);
  auto& from = static_cast<const SwBle_t&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SwBle_t)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_deviceid() != 0) {
    _this->_internal_set_deviceid(from._internal_deviceid());
  }
  if (from._internal_endpoint() != 0) {
    _this->_internal_set_endpoint(from._internal_endpoint());
  }
  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SwBle_t::CopyFrom(const SwBle_t& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SwBle_t)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SwBle_t::IsInitialized() const {
  return true;
}

void SwBle_t::InternalSwap(SwBle_t* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SwBle_t, _impl_.status_)
      + sizeof(SwBle_t::_impl_.status_)
      - PROTOBUF_FIELD_OFFSET(SwBle_t, _impl_.deviceid_)>(
          reinterpret_cast<char*>(&_impl_.deviceid_),
          reinterpret_cast<char*>(&other->_impl_.deviceid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SwBle_t::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ble_2eproto_getter, &descriptor_table_ble_2eproto_once,
      file_level_metadata_ble_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Ble_t*
Arena::CreateMaybeMessage< ::Ble_t >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Ble_t >(arena);
}
template<> PROTOBUF_NOINLINE ::SwBle_t*
Arena::CreateMaybeMessage< ::SwBle_t >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SwBle_t >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
