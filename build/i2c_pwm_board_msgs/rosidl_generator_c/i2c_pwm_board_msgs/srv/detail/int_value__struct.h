// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from i2c_pwm_board_msgs:srv/IntValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "i2c_pwm_board_msgs/srv/int_value.h"


#ifndef I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__STRUCT_H_
#define I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IntValue in the package i2c_pwm_board_msgs.
typedef struct i2c_pwm_board_msgs__srv__IntValue_Request
{
  int16_t value;
} i2c_pwm_board_msgs__srv__IntValue_Request;

// Struct for a sequence of i2c_pwm_board_msgs__srv__IntValue_Request.
typedef struct i2c_pwm_board_msgs__srv__IntValue_Request__Sequence
{
  i2c_pwm_board_msgs__srv__IntValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} i2c_pwm_board_msgs__srv__IntValue_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/IntValue in the package i2c_pwm_board_msgs.
typedef struct i2c_pwm_board_msgs__srv__IntValue_Response
{
  int16_t error;
} i2c_pwm_board_msgs__srv__IntValue_Response;

// Struct for a sequence of i2c_pwm_board_msgs__srv__IntValue_Response.
typedef struct i2c_pwm_board_msgs__srv__IntValue_Response__Sequence
{
  i2c_pwm_board_msgs__srv__IntValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} i2c_pwm_board_msgs__srv__IntValue_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  i2c_pwm_board_msgs__srv__IntValue_Event__request__MAX_SIZE = 1
};
// response
enum
{
  i2c_pwm_board_msgs__srv__IntValue_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/IntValue in the package i2c_pwm_board_msgs.
typedef struct i2c_pwm_board_msgs__srv__IntValue_Event
{
  service_msgs__msg__ServiceEventInfo info;
  i2c_pwm_board_msgs__srv__IntValue_Request__Sequence request;
  i2c_pwm_board_msgs__srv__IntValue_Response__Sequence response;
} i2c_pwm_board_msgs__srv__IntValue_Event;

// Struct for a sequence of i2c_pwm_board_msgs__srv__IntValue_Event.
typedef struct i2c_pwm_board_msgs__srv__IntValue_Event__Sequence
{
  i2c_pwm_board_msgs__srv__IntValue_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} i2c_pwm_board_msgs__srv__IntValue_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__STRUCT_H_
