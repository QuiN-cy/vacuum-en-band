# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/tools/rosnode
# Build directory: /home/student/rosws/build/rosnode
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rosnode_rostest_test_rosnode.test "/home/student/rosws/build/rosnode/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/rosnode/test_results/rosnode/rostest-test_rosnode.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/tools/rosnode --package=rosnode --results-filename test_rosnode.xml --results-base-dir \"/home/student/rosws/build/rosnode/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/tools/rosnode/test/rosnode.test ")
subdirs("gtest")
