# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/HubScreenSrc/hubscreen/hub-zigbee

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/HubScreenSrc/hubscreen/hub-zigbee/build

# Include any dependencies generated for this target.
include CMakeFiles/hub-zigbee.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hub-zigbee.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hub-zigbee.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hub-zigbee.dir/flags.make

CMakeFiles/hub-zigbee.dir/main.cc.o: CMakeFiles/hub-zigbee.dir/flags.make
CMakeFiles/hub-zigbee.dir/main.cc.o: /root/HubScreenSrc/hubscreen/hub-zigbee/main.cc
CMakeFiles/hub-zigbee.dir/main.cc.o: CMakeFiles/hub-zigbee.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/HubScreenSrc/hubscreen/hub-zigbee/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hub-zigbee.dir/main.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hub-zigbee.dir/main.cc.o -MF CMakeFiles/hub-zigbee.dir/main.cc.o.d -o CMakeFiles/hub-zigbee.dir/main.cc.o -c /root/HubScreenSrc/hubscreen/hub-zigbee/main.cc

CMakeFiles/hub-zigbee.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hub-zigbee.dir/main.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/HubScreenSrc/hubscreen/hub-zigbee/main.cc > CMakeFiles/hub-zigbee.dir/main.cc.i

CMakeFiles/hub-zigbee.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hub-zigbee.dir/main.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/HubScreenSrc/hubscreen/hub-zigbee/main.cc -o CMakeFiles/hub-zigbee.dir/main.cc.s

CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o: CMakeFiles/hub-zigbee.dir/flags.make
CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o: /root/HubScreenSrc/hubscreen/hub-zigbee/proto/hub/typedef.pb.cc
CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o: CMakeFiles/hub-zigbee.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/HubScreenSrc/hubscreen/hub-zigbee/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o -MF CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o.d -o CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o -c /root/HubScreenSrc/hubscreen/hub-zigbee/proto/hub/typedef.pb.cc

CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/HubScreenSrc/hubscreen/hub-zigbee/proto/hub/typedef.pb.cc > CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.i

CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/HubScreenSrc/hubscreen/hub-zigbee/proto/hub/typedef.pb.cc -o CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.s

CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o: CMakeFiles/hub-zigbee.dir/flags.make
CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o: /root/HubScreenSrc/hubscreen/hub-zigbee/proto/zigbee/zigbee.pb.cc
CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o: CMakeFiles/hub-zigbee.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/HubScreenSrc/hubscreen/hub-zigbee/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o -MF CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o.d -o CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o -c /root/HubScreenSrc/hubscreen/hub-zigbee/proto/zigbee/zigbee.pb.cc

CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/HubScreenSrc/hubscreen/hub-zigbee/proto/zigbee/zigbee.pb.cc > CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.i

CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/HubScreenSrc/hubscreen/hub-zigbee/proto/zigbee/zigbee.pb.cc -o CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.s

CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o: CMakeFiles/hub-zigbee.dir/flags.make
CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o: /root/HubScreenSrc/hubscreen/hub-zigbee/transport/mqtt/mqtt.cc
CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o: CMakeFiles/hub-zigbee.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/HubScreenSrc/hubscreen/hub-zigbee/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o -MF CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o.d -o CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o -c /root/HubScreenSrc/hubscreen/hub-zigbee/transport/mqtt/mqtt.cc

CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/HubScreenSrc/hubscreen/hub-zigbee/transport/mqtt/mqtt.cc > CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.i

CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/HubScreenSrc/hubscreen/hub-zigbee/transport/mqtt/mqtt.cc -o CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.s

CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o: CMakeFiles/hub-zigbee.dir/flags.make
CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o: /root/HubScreenSrc/hubscreen/hub-zigbee/transport/uart/uart.cc
CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o: CMakeFiles/hub-zigbee.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/HubScreenSrc/hubscreen/hub-zigbee/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o -MF CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o.d -o CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o -c /root/HubScreenSrc/hubscreen/hub-zigbee/transport/uart/uart.cc

CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/HubScreenSrc/hubscreen/hub-zigbee/transport/uart/uart.cc > CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.i

CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/HubScreenSrc/hubscreen/hub-zigbee/transport/uart/uart.cc -o CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.s

# Object files for target hub-zigbee
hub__zigbee_OBJECTS = \
"CMakeFiles/hub-zigbee.dir/main.cc.o" \
"CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o" \
"CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o" \
"CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o" \
"CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o"

# External object files for target hub-zigbee
hub__zigbee_EXTERNAL_OBJECTS =

hub-zigbee: CMakeFiles/hub-zigbee.dir/main.cc.o
hub-zigbee: CMakeFiles/hub-zigbee.dir/proto/hub/typedef.pb.cc.o
hub-zigbee: CMakeFiles/hub-zigbee.dir/proto/zigbee/zigbee.pb.cc.o
hub-zigbee: CMakeFiles/hub-zigbee.dir/transport/mqtt/mqtt.cc.o
hub-zigbee: CMakeFiles/hub-zigbee.dir/transport/uart/uart.cc.o
hub-zigbee: CMakeFiles/hub-zigbee.dir/build.make
hub-zigbee: CMakeFiles/hub-zigbee.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/HubScreenSrc/hubscreen/hub-zigbee/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable hub-zigbee"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hub-zigbee.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hub-zigbee.dir/build: hub-zigbee
.PHONY : CMakeFiles/hub-zigbee.dir/build

CMakeFiles/hub-zigbee.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hub-zigbee.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hub-zigbee.dir/clean

CMakeFiles/hub-zigbee.dir/depend:
	cd /root/HubScreenSrc/hubscreen/hub-zigbee/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/HubScreenSrc/hubscreen/hub-zigbee /root/HubScreenSrc/hubscreen/hub-zigbee /root/HubScreenSrc/hubscreen/hub-zigbee/build /root/HubScreenSrc/hubscreen/hub-zigbee/build /root/HubScreenSrc/hubscreen/hub-zigbee/build/CMakeFiles/hub-zigbee.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hub-zigbee.dir/depend
