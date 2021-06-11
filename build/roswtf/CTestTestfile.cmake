# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/utilities/roswtf
# Build directory: /home/student/rosws/build/roswtf
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_roswtf_rostest_test_roswtf.test "/home/student/rosws/build/roswtf/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/roswtf/test_results/roswtf/rostest-test_roswtf.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/utilities/roswtf --package=roswtf --results-filename test_roswtf.xml --results-base-dir \"/home/student/rosws/build/roswtf/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/utilities/roswtf/test/roswtf.test ")
add_test(_ctest_roswtf_nosetests_test "/home/student/rosws/build/roswtf/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/roswtf/test_results/roswtf/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/student/rosws/build/roswtf/test_results/roswtf" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/student/rosws/src/ros_comm-noetic-devel/utilities/roswtf/test --with-xunit --xunit-file=/home/student/rosws/build/roswtf/test_results/roswtf/nosetests-test.xml")
subdirs("gtest")
