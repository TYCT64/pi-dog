// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from i2c_pwm_board_msgs:msg/ServoArray.idl
// generated code does not contain a copyright notice

#include "i2c_pwm_board_msgs/msg/detail/servo_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__msg__ServoArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x95, 0x0f, 0x9a, 0x4b, 0xd4, 0x0f, 0x98,
      0x33, 0x77, 0x9b, 0x34, 0xe6, 0x85, 0xf9, 0x66,
      0xca, 0x99, 0x5a, 0x5f, 0xa3, 0x5d, 0x0f, 0x0f,
      0xfa, 0xa5, 0xa4, 0x37, 0x3f, 0x2c, 0x46, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "i2c_pwm_board_msgs/msg/detail/servo__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t i2c_pwm_board_msgs__msg__Servo__EXPECTED_HASH = {1, {
    0x15, 0xeb, 0x78, 0x7c, 0xad, 0x8b, 0xb8, 0xaa,
    0x8b, 0x7d, 0x36, 0x05, 0xa4, 0xeb, 0xa1, 0x06,
    0x83, 0xd5, 0x20, 0x20, 0x62, 0x32, 0xe7, 0x0e,
    0x7b, 0xc3, 0x56, 0xb2, 0xbf, 0xb4, 0x5a, 0xa5,
  }};
#endif

static char i2c_pwm_board_msgs__msg__ServoArray__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/ServoArray";
static char i2c_pwm_board_msgs__msg__Servo__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/Servo";

// Define type names, field names, and default values
static char i2c_pwm_board_msgs__msg__ServoArray__FIELD_NAME__servos[] = "servos";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__msg__ServoArray__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__msg__ServoArray__FIELD_NAME__servos, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {i2c_pwm_board_msgs__msg__Servo__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription i2c_pwm_board_msgs__msg__ServoArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {i2c_pwm_board_msgs__msg__Servo__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__msg__ServoArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__msg__ServoArray__TYPE_NAME, 33, 33},
      {i2c_pwm_board_msgs__msg__ServoArray__FIELDS, 1, 1},
    },
    {i2c_pwm_board_msgs__msg__ServoArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&i2c_pwm_board_msgs__msg__Servo__EXPECTED_HASH, i2c_pwm_board_msgs__msg__Servo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = i2c_pwm_board_msgs__msg__Servo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the ServoArray message is commonly used message in this package to\n"
  "# handle multiple assignments of values to servos. the purpose of\n"
  "# the value is dependent on the topic or service being called\n"
  "\n"
  "Servo[] servos";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__msg__ServoArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__msg__ServoArray__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 213, 213},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__msg__ServoArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__msg__ServoArray__get_individual_type_description_source(NULL),
    sources[1] = *i2c_pwm_board_msgs__msg__Servo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
