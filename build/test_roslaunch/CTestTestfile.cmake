# CMake generated Testfile for 
# Source directory: /home/student/rosws/src/ros_comm-noetic-devel/test/test_roslaunch
# Build directory: /home/student/rosws/build/test_roslaunch
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_roslaunch_rostest_test_roslaunch.test "/home/student/rosws/build/test_roslaunch/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_roslaunch/test_results/test_roslaunch/rostest-test_roslaunch.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_roslaunch --package=test_roslaunch --results-filename test_roslaunch.xml --results-base-dir \"/home/student/rosws/build/test_roslaunch/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_roslaunch/test/roslaunch.test ")
add_test(_ctest_test_roslaunch_rostest_test_env.test "/home/student/rosws/build/test_roslaunch/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_roslaunch/test_results/test_roslaunch/rostest-test_env.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_roslaunch --package=test_roslaunch --results-filename test_env.xml --results-base-dir \"/home/student/rosws/build/test_roslaunch/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_roslaunch/test/env.test ")
add_test(_ctest_test_roslaunch_rostest_test_params_basic.test "/home/student/rosws/build/test_roslaunch/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/student/rosws/build/test_roslaunch/test_results/test_roslaunch/rostest-test_params_basic.xml" "--return-code" "/usr/bin/python2 /home/student/rosws/src/ros_comm-noetic-devel/tools/rostest/scripts/rostest --pkgdir=/home/student/rosws/src/ros_comm-noetic-devel/test/test_roslaunch --package=test_roslaunch --results-filename test_params_basic.xml --results-base-dir \"/home/student/rosws/build/test_roslaunch/test_results\" /home/student/rosws/src/ros_comm-noetic-devel/test/test_roslaunch/test/params_basic.test ")
subdirs("gtest")
