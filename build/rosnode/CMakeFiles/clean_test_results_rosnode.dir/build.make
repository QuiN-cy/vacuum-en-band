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
CMAKE_SOURCE_DIR = /home/student/rosws/src/ros_comm-noetic-devel/tools/rosnode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/rosws/build/rosnode

# Utility rule file for clean_test_results_rosnode.

# Include the progress variables for this target.
include CMakeFiles/clean_test_results_rosnode.dir/progress.make

CMakeFiles/clean_test_results_rosnode:
	/usr/bin/python2 /opt/ros/melodic/share/catkin/cmake/test/remove_test_results.py /home/student/rosws/build/rosnode/test_results/rosnode

clean_test_results_rosnode: CMakeFiles/clean_test_results_rosnode
clean_test_results_rosnode: CMakeFiles/clean_test_results_rosnode.dir/build.make

.PHONY : clean_test_results_rosnode

# Rule to build all files generated by this target.
CMakeFiles/clean_test_results_rosnode.dir/build: clean_test_results_rosnode

.PHONY : CMakeFiles/clean_test_results_rosnode.dir/build

CMakeFiles/clean_test_results_rosnode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_rosnode.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clean_test_results_rosnode.dir/clean

CMakeFiles/clean_test_results_rosnode.dir/depend:
	cd /home/student/rosws/build/rosnode && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/rosws/src/ros_comm-noetic-devel/tools/rosnode /home/student/rosws/src/ros_comm-noetic-devel/tools/rosnode /home/student/rosws/build/rosnode /home/student/rosws/build/rosnode /home/student/rosws/build/rosnode/CMakeFiles/clean_test_results_rosnode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clean_test_results_rosnode.dir/depend

