# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/rosserial/rosserial_client
# Build directory: /home/student/rosws/build/rosserial_client
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rosserial_client_gtest_float64_test "/home/student/rosws/build/rosserial_client/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/rosserial_client/test_results/rosserial_client/gtest-float64_test.xml" "--return-code" "/home/student/rosws/devel/.private/rosserial_client/lib/rosserial_client/float64_test --gtest_output=xml:/home/student/rosws/build/rosserial_client/test_results/rosserial_client/gtest-float64_test.xml")
add_test(_ctest_rosserial_client_gtest_subscriber_test "/home/student/rosws/build/rosserial_client/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/rosserial_client/test_results/rosserial_client/gtest-subscriber_test.xml" "--return-code" "/home/student/rosws/devel/.private/rosserial_client/lib/rosserial_client/subscriber_test --gtest_output=xml:/home/student/rosws/build/rosserial_client/test_results/rosserial_client/gtest-subscriber_test.xml")
add_test(_ctest_rosserial_client_gtest_time_test "/home/student/rosws/build/rosserial_client/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/rosserial_client/test_results/rosserial_client/gtest-time_test.xml" "--return-code" "/home/student/rosws/devel/.private/rosserial_client/lib/rosserial_client/time_test --gtest_output=xml:/home/student/rosws/build/rosserial_client/test_results/rosserial_client/gtest-time_test.xml")
subdirs("gtest")
