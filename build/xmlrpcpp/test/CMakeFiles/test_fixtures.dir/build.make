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
include test/CMakeFiles/test_fixtures.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/test_fixtures.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/test_fixtures.dir/flags.make

test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o: test/CMakeFiles/test_fixtures.dir/flags.make
test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o: /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/test_fixtures.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/rosws/build/xmlrpcpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o"
	cd /home/student/rosws/build/xmlrpcpp/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o -c /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/test_fixtures.cpp

test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_fixtures.dir/test_fixtures.cpp.i"
	cd /home/student/rosws/build/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/test_fixtures.cpp > CMakeFiles/test_fixtures.dir/test_fixtures.cpp.i

test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_fixtures.dir/test_fixtures.cpp.s"
	cd /home/student/rosws/build/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test/test_fixtures.cpp -o CMakeFiles/test_fixtures.dir/test_fixtures.cpp.s

test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.requires:

.PHONY : test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.requires

test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.provides: test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.requires
	$(MAKE) -f test/CMakeFiles/test_fixtures.dir/build.make test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.provides.build
.PHONY : test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.provides

test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.provides.build: test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o


# Object files for target test_fixtures
test_fixtures_OBJECTS = \
"CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o"

# External object files for target test_fixtures
test_fixtures_EXTERNAL_OBJECTS =

/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: test/CMakeFiles/test_fixtures.dir/build.make
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /home/student/rosws/devel/.private/xmlrpcpp/lib/libxmlrpcpp.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: gtest/googlemock/gtest/libgtest.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /opt/ros/melodic/lib/librostime.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /opt/ros/melodic/lib/libcpp_common.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so: test/CMakeFiles/test_fixtures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/rosws/build/xmlrpcpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so"
	cd /home/student/rosws/build/xmlrpcpp/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_fixtures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/test_fixtures.dir/build: /home/student/rosws/devel/.private/xmlrpcpp/lib/libtest_fixtures.so

.PHONY : test/CMakeFiles/test_fixtures.dir/build

test/CMakeFiles/test_fixtures.dir/requires: test/CMakeFiles/test_fixtures.dir/test_fixtures.cpp.o.requires

.PHONY : test/CMakeFiles/test_fixtures.dir/requires

test/CMakeFiles/test_fixtures.dir/clean:
	cd /home/student/rosws/build/xmlrpcpp/test && $(CMAKE_COMMAND) -P CMakeFiles/test_fixtures.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/test_fixtures.dir/clean

test/CMakeFiles/test_fixtures.dir/depend:
	cd /home/student/rosws/build/xmlrpcpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp /home/student/rosws/src/ros_comm-noetic-devel/utilities/xmlrpcpp/test /home/student/rosws/build/xmlrpcpp /home/student/rosws/build/xmlrpcpp/test /home/student/rosws/build/xmlrpcpp/test/CMakeFiles/test_fixtures.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/test_fixtures.dir/depend

