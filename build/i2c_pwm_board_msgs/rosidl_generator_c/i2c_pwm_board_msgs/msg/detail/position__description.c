// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from i2c_pwm_board_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#include "i2c_pwm_board_msgs/msg/detail/position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__msg__Position__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x61, 0xb7, 0x6d, 0x4b, 0x05, 0x1c, 0x49,
      0xa7, 0xba, 0x36, 0xea, 0x3d, 0xf3, 0xd7, 0x03,
      0x24, 0x57, 0x29, 0xc7, 0xc9, 0xa0, 0x3e, 0x07,
      0x4b, 0x3e, 0xf1, 0xa1, 0x59, 0x95, 0x25, 0x44,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char i2c_pwm_board_msgs__msg__Position__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/Position";

// Define type names, field names, and default values
static char i2c_pwm_board_msgs__msg__Position__FIELD_NAME__servo[] = "servo";
static char i2c_pwm_board_msgs__msg__Position__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__msg__Position__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__msg__Position__FIELD_NAME__servo, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__msg__Position__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__msg__Position__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
      {i2c_pwm_board_msgs__msg__Position__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the position message is used when configuring drive mode to\n"
  "# assign a  servo to a specific wheel positon in the drive system\n"
  "# postions are specific toe the desired drive mode\n"
  "# ackerman has only one position\n"
  "# 1 = drive\n"
  "# differential has two positons\n"
  "# 1 = left, 2 = right\n"
  "# mecanum has four positions\n"
  "# 1 = front left, 2 = front right, 3 = rear left, 4 = rear right\n"
  "# multiple servos/motors may be used for each positon\n"
  "\n"
  "int16 servo\n"
  "int16 position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__msg__Position__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 454, 454},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__msg__Position__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__msg__Position__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
