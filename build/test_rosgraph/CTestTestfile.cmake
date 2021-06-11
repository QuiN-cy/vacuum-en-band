# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosgraph
# Build directory: /home/student/rosws/build/test_rosgraph
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosgraph_rostest_test_masterapi.test "/home/student/rosws/build/test_rosgraph/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_rosgraph/test_results/test_rosgraph/rostest-test_masterapi.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosgraph --package=test_rosgraph --results-filename test_masterapi.xml --results-base-dir \"/home/student/rosws/build/test_rosgraph/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosgraph/test/masterapi.test ")
subdirs("gtest")
