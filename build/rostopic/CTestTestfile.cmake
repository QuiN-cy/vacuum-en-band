# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/tools/rostopic
# Build directory: /home/student/rosws/build/rostopic
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rostopic_rostest_test_rostopic.test "/home/student/rosws/build/rostopic/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/rostopic/test_results/rostopic/rostest-test_rostopic.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/tools/rostopic --package=rostopic --results-filename test_rostopic.xml --results-base-dir \"/home/student/rosws/build/rostopic/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/tools/rostopic/test/rostopic.test ")
add_test(_ctest_rostopic_nosetests_test.test_rostopic_command_line_offline.py "/home/student/rosws/build/rostopic/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/rostopic/test_results/rostopic/nosetests-test.test_rostopic_command_line_offline.py.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/student/rosws/build/rostopic/test_results/rostopic" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostopic/test/test_rostopic_command_line_offline.py --with-xunit --xunit-file=/home/student/rosws/build/rostopic/test_results/rostopic/nosetests-test.test_rostopic_command_line_offline.py.xml")
subdirs("gtest")
