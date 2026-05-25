// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from i2c_pwm_board_msgs:msg/ServoConfig.idl
// generated code does not contain a copyright notice

#include "i2c_pwm_board_msgs/msg/detail/servo_config__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__msg__ServoConfig__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7b, 0x6a, 0xa6, 0x99, 0x82, 0x98, 0xaf, 0x5f,
      0x3c, 0x02, 0x49, 0x8a, 0x29, 0x83, 0x9a, 0x8d,
      0x60, 0xd9, 0xdd, 0x91, 0x39, 0x52, 0x38, 0x22,
      0x61, 0x57, 0x46, 0xbf, 0x5a, 0x7c, 0xcc, 0xc2,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char i2c_pwm_board_msgs__msg__ServoConfig__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/ServoConfig";

// Define type names, field names, and default values
static char i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__servo[] = "servo";
static char i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__center[] = "center";
static char i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__range[] = "range";
static char i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__direction[] = "direction";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__msg__ServoConfig__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__servo, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__center, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__range, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__msg__ServoConfig__FIELD_NAME__direction, 9, 9},
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
i2c_pwm_board_msgs__msg__ServoConfig__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__msg__ServoConfig__TYPE_NAME, 34, 34},
      {i2c_pwm_board_msgs__msg__ServoConfig__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the ServoConfig message is used to assign specific configuration\n"
  "# data to a servo. the data is needed to normalize servos to\n"
  "# common values to isolate variations from the rest of the user's\n"
  "# robot motion code. \n"
  "\n"
  "int16 servo\n"
  "int16 center\n"
  "int16 range\n"
  "int16 direction";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__msg__ServoConfig__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__msg__ServoConfig__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 270, 270},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__msg__ServoConfig__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__msg__ServoConfig__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
