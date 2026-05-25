// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from i2c_pwm_board_msgs:srv/DriveMode.idl
// generated code does not contain a copyright notice

#include "i2c_pwm_board_msgs/srv/detail/drive_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__srv__DriveMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x18, 0x11, 0x82, 0xcd, 0x3b, 0x96, 0xd2,
      0xc1, 0x50, 0x42, 0xb1, 0x67, 0xfd, 0xc7, 0x1d,
      0x29, 0x38, 0xc5, 0xcd, 0x3c, 0xd1, 0x72, 0xc6,
      0x1e, 0xc9, 0xab, 0x7a, 0xd3, 0x03, 0x04, 0x49,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x31, 0x63, 0xf9, 0x42, 0xcc, 0xe2, 0x93,
      0x02, 0x9d, 0xb3, 0xb3, 0x5f, 0x35, 0x72, 0xa7,
      0x47, 0xe9, 0xcc, 0xde, 0x6f, 0x72, 0xf5, 0x92,
      0x3a, 0xe6, 0xf6, 0x3a, 0x38, 0xe0, 0x14, 0x1e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0xea, 0x54, 0x51, 0x93, 0x83, 0x92, 0xc7,
      0xb0, 0xa8, 0x52, 0x8b, 0x64, 0x8f, 0x8c, 0x54,
      0x90, 0x7e, 0xf5, 0xa9, 0xe7, 0x01, 0x2f, 0x21,
      0xd4, 0x22, 0xb1, 0xd8, 0xdc, 0x5e, 0xe0, 0x38,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_i2c_pwm_board_msgs
const rosidl_type_hash_t *
i2c_pwm_board_msgs__srv__DriveMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x80, 0x54, 0x72, 0x21, 0xcf, 0x23, 0x49,
      0x44, 0xd3, 0x9c, 0xc9, 0x2e, 0x93, 0xe4, 0xf2,
      0xcc, 0xc0, 0xa6, 0x76, 0x7e, 0xcf, 0x7e, 0x3d,
      0x0d, 0xc6, 0x13, 0x7e, 0x5e, 0x32, 0xf1, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "i2c_pwm_board_msgs/msg/detail/position__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t i2c_pwm_board_msgs__msg__Position__EXPECTED_HASH = {1, {
    0x5b, 0x61, 0xb7, 0x6d, 0x4b, 0x05, 0x1c, 0x49,
    0xa7, 0xba, 0x36, 0xea, 0x3d, 0xf3, 0xd7, 0x03,
    0x24, 0x57, 0x29, 0xc7, 0xc9, 0xa0, 0x3e, 0x07,
    0x4b, 0x3e, 0xf1, 0xa1, 0x59, 0x95, 0x25, 0x44,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char i2c_pwm_board_msgs__srv__DriveMode__TYPE_NAME[] = "i2c_pwm_board_msgs/srv/DriveMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char i2c_pwm_board_msgs__msg__Position__TYPE_NAME[] = "i2c_pwm_board_msgs/msg/Position";
static char i2c_pwm_board_msgs__srv__DriveMode_Event__TYPE_NAME[] = "i2c_pwm_board_msgs/srv/DriveMode_Event";
static char i2c_pwm_board_msgs__srv__DriveMode_Request__TYPE_NAME[] = "i2c_pwm_board_msgs/srv/DriveMode_Request";
static char i2c_pwm_board_msgs__srv__DriveMode_Response__TYPE_NAME[] = "i2c_pwm_board_msgs/srv/DriveMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char i2c_pwm_board_msgs__srv__DriveMode__FIELD_NAME__request_message[] = "request_message";
static char i2c_pwm_board_msgs__srv__DriveMode__FIELD_NAME__response_message[] = "response_message";
static char i2c_pwm_board_msgs__srv__DriveMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__srv__DriveMode__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__srv__DriveMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {i2c_pwm_board_msgs__srv__DriveMode_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {i2c_pwm_board_msgs__srv__DriveMode_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {i2c_pwm_board_msgs__srv__DriveMode_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription i2c_pwm_board_msgs__srv__DriveMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__srv__DriveMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__srv__DriveMode__TYPE_NAME, 32, 32},
      {i2c_pwm_board_msgs__srv__DriveMode__FIELDS, 3, 3},
    },
    {i2c_pwm_board_msgs__srv__DriveMode__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&i2c_pwm_board_msgs__msg__Position__EXPECTED_HASH, i2c_pwm_board_msgs__msg__Position__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = i2c_pwm_board_msgs__msg__Position__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = i2c_pwm_board_msgs__srv__DriveMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__mode[] = "mode";
static char i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__rpm[] = "rpm";
static char i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__radius[] = "radius";
static char i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__track[] = "track";
static char i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__scale[] = "scale";
static char i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__servos[] = "servos";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__srv__DriveMode_Request__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__rpm, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__track, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__scale, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__FIELD_NAME__servos, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription i2c_pwm_board_msgs__srv__DriveMode_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__srv__DriveMode_Request__TYPE_NAME, 40, 40},
      {i2c_pwm_board_msgs__srv__DriveMode_Request__FIELDS, 6, 6},
    },
    {i2c_pwm_board_msgs__srv__DriveMode_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&i2c_pwm_board_msgs__msg__Position__EXPECTED_HASH, i2c_pwm_board_msgs__msg__Position__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = i2c_pwm_board_msgs__msg__Position__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char i2c_pwm_board_msgs__srv__DriveMode_Response__FIELD_NAME__error[] = "error";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__srv__DriveMode_Response__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Response__FIELD_NAME__error, 5, 5},
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
i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__srv__DriveMode_Response__TYPE_NAME, 41, 41},
      {i2c_pwm_board_msgs__srv__DriveMode_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char i2c_pwm_board_msgs__srv__DriveMode_Event__FIELD_NAME__info[] = "info";
static char i2c_pwm_board_msgs__srv__DriveMode_Event__FIELD_NAME__request[] = "request";
static char i2c_pwm_board_msgs__srv__DriveMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field i2c_pwm_board_msgs__srv__DriveMode_Event__FIELDS[] = {
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {i2c_pwm_board_msgs__srv__DriveMode_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {i2c_pwm_board_msgs__srv__DriveMode_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription i2c_pwm_board_msgs__srv__DriveMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__msg__Position__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {i2c_pwm_board_msgs__srv__DriveMode_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
i2c_pwm_board_msgs__srv__DriveMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {i2c_pwm_board_msgs__srv__DriveMode_Event__TYPE_NAME, 38, 38},
      {i2c_pwm_board_msgs__srv__DriveMode_Event__FIELDS, 3, 3},
    },
    {i2c_pwm_board_msgs__srv__DriveMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&i2c_pwm_board_msgs__msg__Position__EXPECTED_HASH, i2c_pwm_board_msgs__msg__Position__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = i2c_pwm_board_msgs__msg__Position__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# the drive_mode service is used to assigned servos to various drive modes\n"
  "# the drive modes determine how the assigned servos respond to geometry_msgs::Twist messages\n"
  "# drive modes are one of: ackerman, differential, or mecanum\n"
  "# to accurately convert velocity in m/s the controller needs to know three values:\n"
  "#   the RPM    - the maximum output speed available from the drive motors\n"
  "#   the radius - the drive wheel radius in meters\n"
  "#   the track  - the distance between the left and right wheels in meters\n"
  "# use the scale value to adjust incoming Twist values as needed to match the servo/motor capability\n"
  "\n"
  "\n"
  "string mode\n"
  "float32 rpm\n"
  "float32 radius\n"
  "float32 track\n"
  "float32 scale\n"
  "Position[] servos\n"
  "---\n"
  "int16 error";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__srv__DriveMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__srv__DriveMode__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 713, 713},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__srv__DriveMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__srv__DriveMode_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__srv__DriveMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__srv__DriveMode_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
i2c_pwm_board_msgs__srv__DriveMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {i2c_pwm_board_msgs__srv__DriveMode_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__srv__DriveMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__srv__DriveMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *i2c_pwm_board_msgs__msg__Position__get_individual_type_description_source(NULL);
    sources[3] = *i2c_pwm_board_msgs__srv__DriveMode_Event__get_individual_type_description_source(NULL);
    sources[4] = *i2c_pwm_board_msgs__srv__DriveMode_Request__get_individual_type_description_source(NULL);
    sources[5] = *i2c_pwm_board_msgs__srv__DriveMode_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__srv__DriveMode_Request__get_individual_type_description_source(NULL),
    sources[1] = *i2c_pwm_board_msgs__msg__Position__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__srv__DriveMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
i2c_pwm_board_msgs__srv__DriveMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *i2c_pwm_board_msgs__srv__DriveMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *i2c_pwm_board_msgs__msg__Position__get_individual_type_description_source(NULL);
    sources[3] = *i2c_pwm_board_msgs__srv__DriveMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *i2c_pwm_board_msgs__srv__DriveMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
