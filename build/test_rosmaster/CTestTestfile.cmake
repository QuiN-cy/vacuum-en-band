# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosmaster
# Build directory: /home/student/rosws/build/test_rosmaster
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosmaster_rostest_test_rosmaster.test "/home/student/rosws/build/test_rosmaster/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_rosmaster/test_results/test_rosmaster/rostest-test_rosmaster.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosmaster --package=test_rosmaster --results-filename test_rosmaster.xml --results-base-dir \"/home/student/rosws/build/test_rosmaster/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosmaster/test/rosmaster.test ")
add_test(_ctest_test_rosmaster_rostest_test_paramserver.test "/home/student/rosws/build/test_rosmaster/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_rosmaster/test_results/test_rosmaster/rostest-test_paramserver.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosmaster --package=test_rosmaster --results-filename test_paramserver.xml --results-base-dir \"/home/student/rosws/build/test_rosmaster/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosmaster/test/paramserver.test ")
subdirs("gtest")
