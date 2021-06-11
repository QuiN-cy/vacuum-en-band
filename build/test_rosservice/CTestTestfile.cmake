# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosservice
# Build directory: /home/student/rosws/build/test_rosservice
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosservice_nosetests_test "/home/student/rosws/build/test_rosservice/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_rosservice/test_results/test_rosservice/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/student/rosws/build/test_rosservice/test_results/test_rosservice" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosservice/test --with-xunit --xunit-file=/home/student/rosws/build/test_rosservice/test_results/test_rosservice/nosetests-test.xml")
add_test(_ctest_test_rosservice_rostest_test_rosservice.test "/home/student/rosws/build/test_rosservice/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_rosservice/test_results/test_rosservice/rostest-test_rosservice.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosservice --package=test_rosservice --results-filename test_rosservice.xml --results-base-dir \"/home/student/rosws/build/test_rosservice/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_rosservice/test/rosservice.test ")
subdirs("gtest")
