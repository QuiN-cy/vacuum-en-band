execute_process(COMMAND "/home/student/rosws/build/rosgraph/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/student/rosws/build/rosgraph/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
