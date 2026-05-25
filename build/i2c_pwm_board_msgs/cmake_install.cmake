# Install script for directory: /home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/pi-dog_ws/install/i2c_pwm_board_msgs")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/i2c_pwm_board_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/msg/Position.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/msg/PositionArray.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/msg/Servo.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/msg/ServoArray.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/msg/ServoConfig.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/msg/ServoConfigArray.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/srv/DriveMode.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/srv/IntValue.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/srv/ServosConfig.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_type_description/i2c_pwm_board_msgs/srv/StopServos.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/i2c_pwm_board_msgs/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_c/i2c_pwm_board_msgs/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/opt/ros/jazzy/lib/python3.12/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/i2c_pwm_board_msgs/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_typesupport_fastrtps_c/i2c_pwm_board_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/i2c_pwm_board_msgs/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_typesupport_introspection_c/i2c_pwm_board_msgs/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_c.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/i2c_pwm_board_msgs/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_cpp/i2c_pwm_board_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/i2c_pwm_board_msgs/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_typesupport_fastrtps_cpp/i2c_pwm_board_msgs/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/i2c_pwm_board_msgs/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_typesupport_introspection_cpp/i2c_pwm_board_msgs/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs-0.1.0-py3.12.egg-info" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_python/i2c_pwm_board_msgs/i2c_pwm_board_msgs.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_py/i2c_pwm_board_msgs/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/ubuntu/pi-dog_ws/install/i2c_pwm_board_msgs/lib/python3.12/site-packages/i2c_pwm_board_msgs"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs" TYPE MODULE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_py/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/i2c_pwm_board_msgs_s__rosidl_typesupport_fastrtps_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs" TYPE MODULE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_py/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/i2c_pwm_board_msgs_s__rosidl_typesupport_introspection_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs" TYPE MODULE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_py/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.12/site-packages/i2c_pwm_board_msgs/i2c_pwm_board_msgs_s__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/i2c_pwm_board_msgs_s__rosidl_typesupport_c.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/libi2c_pwm_board_msgs__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_py.so"
         OLD_RPATH "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs:/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libi2c_pwm_board_msgs__rosidl_generator_py.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rust_packages" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_index/share/ament_index/resource_index/rust_packages/i2c_pwm_board_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs" TYPE DIRECTORY FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_generator_rs/i2c_pwm_board_msgs/rust")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/msg/Position.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/msg/PositionArray.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/msg/Servo.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/msg/ServoArray.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/msg/ServoConfig.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/msg/ServoConfigArray.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/srv/DriveMode.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/srv/IntValue.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/srv/ServosConfig.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_adapter/i2c_pwm_board_msgs/srv/StopServos.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/msg/Position.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/msg/PositionArray.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/msg/Servo.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/msg/ServoArray.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/msg/ServoConfig.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/msg" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/msg/ServoConfigArray.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/srv/DriveMode.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/srv/IntValue.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/srv/ServosConfig.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/srv" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/srv/StopServos.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/i2c_pwm_board_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/i2c_pwm_board_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/environment" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_index/share/ament_index/resource_index/packages/i2c_pwm_board_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cppExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cppExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/i2c_pwm_board_msgs__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/i2c_pwm_board_msgs__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_pyExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_pyExport.cmake"
         "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_pyExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_pyExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake/export_i2c_pwm_board_msgs__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_pyExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/CMakeFiles/Export/26042313695cbf015b8791f11215719c/export_i2c_pwm_board_msgs__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs/cmake" TYPE FILE FILES
    "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_core/i2c_pwm_board_msgsConfig.cmake"
    "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/ament_cmake_core/i2c_pwm_board_msgsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/i2c_pwm_board_msgs" TYPE FILE FILES "/home/ubuntu/pi-dog_ws/src/i2c_pwm_board/i2c_pwm_board_msgs/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/i2c_pwm_board_msgs__py/cmake_install.cmake")
  include("/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/i2c_pwm_board_msgs__rs/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ubuntu/pi-dog_ws/build/i2c_pwm_board_msgs/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
