// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from i2c_pwm_board_msgs:msg/Servo.idl
// generated code does not contain a copyright notice

#include "i2c_pwm_board_msgs/msg/detail/servo__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__msg__Servo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0xeb, 0x78, 0x7c, 0xad, 0x8b, 0xb8, 0xaa,
      0x8b, 0x7d, 0x36, 0x05, 0xa4, 0xeb, 0xa1, 0x06,
      0x83, 0xd5, 0x20, 0x20, 0x62, 0x32, 0xe7, 0x0e,
      0x7b, 0xc3, 0x56, 0xb2, 0xbf, 0xb4, 0x5a, 0xa5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char i2c_pwm_board_msgs__msg__Servo__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/Servo";

// Define type names, field names, and default values
static char i2c_pwm_board_msgs__msg__Servo__FIELD_NAME__servo[] = "servo";
static char i2c_pwm_board_msgs__msg__Servo__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__msg__Servo__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__msg__Servo__FIELD_NAME__servo, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__msg__Servo__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__msg__Servo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__msg__Servo__TYPE_NAME, 28, 28},
      {i2c_pwm_board_msgs__msg__Servo__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the Servo message is commonly used message in this package to\n"
  "# assign a value to a specific servo. the purpose of the value is\n"
  "# dependent on the topic or service being called\n"
  "\n"
  "int16 servo\n"
  "float32 value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__msg__Servo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__msg__Servo__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 206, 206},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__msg__Servo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__msg__Servo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
