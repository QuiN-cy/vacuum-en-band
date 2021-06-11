# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/tools/rosbag
# Build directory: /home/student/rosws/build/rosbag
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rosbag_nosetests_test "/home/student/rosws/build/rosbag/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/rosbag/test_results/rosbag/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/student/rosws/build/rosbag/test_results/rosbag" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/student/rosws/src/ros_comm-noetic-devel/tools/rosbag/test --with-xunit --xunit-file=/home/student/rosws/build/rosbag/test_results/rosbag/nosetests-test.xml")
subdirs("gtest")
