# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosparam
# Build directory: /home/student/rosws/build/test_rosparam
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosparam_rostest_test_rosparam.test "/home/student/rosws/build/test_rosparam/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_rosparam/test_results/test_rosparam/rostest-test_rosparam.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosparam --package=test_rosparam --results-filename test_rosparam.xml --results-base-dir \"/home/student/rosws/build/test_rosparam/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosparam/test/rosparam.test ")
add_test(_ctest_test_rosparam_nosetests_test "/home/student/rosws/build/test_rosparam/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_rosparam/test_results/test_rosparam/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/student/rosws/build/test_rosparam/test_results/test_rosparam" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosparam/test --with-xunit --xunit-file=/home/student/rosws/build/test_rosparam/test_results/test_rosparam/nosetests-test.xml")
subdirs("gtest")
