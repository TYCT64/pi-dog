// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from i2c_pwm_board_msgs:msg/PositionArray.idl
// generated code does not contain a copyright notice

#include "i2c_pwm_board_msgs/msg/detail/position_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__msg__PositionArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0x08, 0xfe, 0x46, 0xbb, 0x1f, 0xe0, 0x31,
      0x4e, 0x27, 0xea, 0xc7, 0x7e, 0x62, 0x54, 0xc1,
      0xa1, 0x50, 0x4b, 0x10, 0x63, 0xdc, 0x9f, 0xb5,
      0x51, 0xc8, 0xac, 0x29, 0x03, 0x29, 0x6d, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "i2c_pwm_board_msgs/msg/detail/position__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t i2c_pwm_board_msgs__msg__Position__EXPECTED_HASH = {1, {
    0x5b, 0x61, 0xb7, 0x6d, 0x4b, 0x05, 0x1c, 0x49,
    0xa7, 0xba, 0x36, 0xea, 0x3d, 0xf3, 0xd7, 0x03,
    0x24, 0x57, 0x29, 0xc7, 0xc9, 0xa0, 0x3e, 0x07,
    0x4b, 0x3e, 0xf1, 0xa1, 0x59, 0x95, 0x25, 0x44,
  }};
#endif

static char i2c_pwm_board_msgs__msg__PositionArray__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/PositionArray";
static char i2c_pwm_board_msgs__msg__Position__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/Position";

// Define type names, field names, and default values
static char i2c_pwm_board_msgs__msg__PositionArray__FIELD_NAME__servos[] = "servos";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__msg__PositionArray__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__msg__PositionArray__FIELD_NAME__servos, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription i2c_pwm_board_msgs__msg__PositionArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__msg__PositionArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__msg__PositionArray__TYPE_NAME, 36, 36},
      {i2c_pwm_board_msgs__msg__PositionArray__FIELDS, 1, 1},
    },
    {i2c_pwm_board_msgs__msg__PositionArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&i2c_pwm_board_msgs__msg__Position__EXPECTED_HASH, i2c_pwm_board_msgs__msg__Position__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = i2c_pwm_board_msgs__msg__Position__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the PositionArray message handles multiple position assignments\n"
  "# of servos.\n"
  "\n"
  "Position[] servos";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__msg__PositionArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__msg__PositionArray__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 98, 98},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__msg__PositionArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__msg__PositionArray__get_individual_type_description_source(NULL),
    sources[1] = *i2c_pwm_board_msgs__msg__Position__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
