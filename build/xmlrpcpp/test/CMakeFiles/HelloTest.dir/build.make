# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/rosws/build/xmlrpcpp

# Include any dependencies generated for this target.
include test/CMakeFiles/HelloTest.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/HelloTest.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/HelloTest.dir/flags.make

test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o: test/CMakeFiles/HelloTest.dir/flags.make
test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o: /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/HelloTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/rosws/build/xmlrpcpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o"
	cd /home/student/rosws/build/xmlrpcpp/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HelloTest.dir/HelloTest.cpp.o -c /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/HelloTest.cpp

test/CMakeFiles/HelloTest.dir/HelloTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HelloTest.dir/HelloTest.cpp.i"
	cd /home/student/rosws/build/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/HelloTest.cpp > CMakeFiles/HelloTest.dir/HelloTest.cpp.i

test/CMakeFiles/HelloTest.dir/HelloTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HelloTest.dir/HelloTest.cpp.s"
	cd /home/student/rosws/build/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/HelloTest.cpp -o CMakeFiles/HelloTest.dir/HelloTest.cpp.s

test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.requires:

.PHONY : test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.requires

test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.provides: test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/HelloTest.dir/build.make test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.provides.build
.PHONY : test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.provides

test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.provides.build: test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o


# Object files for target HelloTest
HelloTest_OBJECTS = \
"CMakeFiles/HelloTest.dir/HelloTest.cpp.o"

# External object files for target HelloTest
HelloTest_EXTERNAL_OBJECTS =

/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: test/CMakeFiles/HelloTest.dir/build.make
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: gtest/googlemock/gtest/libgtest.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /home/student/rosws/devel/.private/xmlrpcpp/lib/libxmlrpcpp.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /opt/ros/melodic/lib/librostime.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /opt/ros/melodic/lib/libcpp_common.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest: test/CMakeFiles/HelloTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/rosws/build/xmlrpcpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest"
	cd /home/student/rosws/build/xmlrpcpp/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HelloTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/HelloTest.dir/build: /home/student/rosws/devel/.private/xmlrpcpp/lib/xmlrpcpp/HelloTest

.PHONY : test/CMakeFiles/HelloTest.dir/build

test/CMakeFiles/HelloTest.dir/requires: test/CMakeFiles/HelloTest.dir/HelloTest.cpp.o.requires

.PHONY : test/CMakeFiles/HelloTest.dir/requires

test/CMakeFiles/HelloTest.dir/clean:
	cd /home/student/rosws/build/xmlrpcpp/test && $(CMAKE_COMMAND) -P CMakeFiles/HelloTest.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/HelloTest.dir/clean

test/CMakeFiles/HelloTest.dir/depend:
	cd /home/student/rosws/build/xmlrpcpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test /home/student/rosws/build/xmlrpcpp /home/student/rosws/build/xmlrpcpp/test /home/student/rosws/build/xmlrpcpp/test/CMakeFiles/HelloTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/HelloTest.dir/depend
