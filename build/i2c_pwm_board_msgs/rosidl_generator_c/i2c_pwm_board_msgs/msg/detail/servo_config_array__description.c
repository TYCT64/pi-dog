// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from i2c_pwm_board_msgs:msg/ServoConfigArray.idl
// generated code does not contain a copyright notice

#include "i2c_pwm_board_msgs/msg/detail/servo_config_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__msg__ServoConfigArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0xc9, 0xeb, 0x2f, 0xd7, 0x42, 0xa9, 0x5a,
      0x3e, 0xc6, 0x76, 0x9d, 0x27, 0x11, 0x88, 0x0d,
      0x1a, 0xf0, 0x22, 0x18, 0xe2, 0xca, 0x47, 0x43,
      0x03, 0xf5, 0x2a, 0x87, 0x45, 0x02, 0x16, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "i2c_pwm_board_msgs/msg/detail/servo_config__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t i2c_pwm_board_msgs__msg__ServoConfig__EXPECTED_HASH = {1, {
    0x7b, 0x6a, 0xa6, 0x99, 0x82, 0x98, 0xaf, 0x5f,
    0x3c, 0x02, 0x49, 0x8a, 0x29, 0x83, 0x9a, 0x8d,
    0x60, 0xd9, 0xdd, 0x91, 0x39, 0x52, 0x38, 0x22,
    0x61, 0x57, 0x46, 0xbf, 0x5a, 0x7c, 0xcc, 0xc2,
  }};
#endif

static char i2c_pwm_board_msgs__msg__ServoConfigArray__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/ServoConfigArray";
static char i2c_pwm_board_msgs__msg__ServoConfig__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/ServoConfig";

// Define type names, field names, and default values
static char i2c_pwm_board_msgs__msg__ServoConfigArray__FIELD_NAME__servos[] = "servos";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__msg__ServoConfigArray__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__msg__ServoConfigArray__FIELD_NAME__servos, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {i2c_pwm_board_msgs__msg__ServoConfig__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription i2c_pwm_board_msgs__msg__ServoConfigArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {i2c_pwm_board_msgs__msg__ServoConfig__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__msg__ServoConfigArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__msg__ServoConfigArray__TYPE_NAME, 39, 39},
      {i2c_pwm_board_msgs__msg__ServoConfigArray__FIELDS, 1, 1},
    },
    {i2c_pwm_board_msgs__msg__ServoConfigArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&i2c_pwm_board_msgs__msg__ServoConfig__EXPECTED_HASH, i2c_pwm_board_msgs__msg__ServoConfig__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = i2c_pwm_board_msgs__msg__ServoConfig__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the ServoConfigArray message is used to handle multiple assignments\n"
  "# of config data to servos. the data is needed to normalize servos to\n"
  "# common values to isolate variations from the rest of the user's\n"
  "# robot motion code. \n"
  "\n"
  "ServoConfig[] servos";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__msg__ServoConfigArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__msg__ServoConfigArray__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 250, 250},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__msg__ServoConfigArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__msg__ServoConfigArray__get_individual_type_description_source(NULL),
    sources[1] = *i2c_pwm_board_msgs__msg__ServoConfig__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
