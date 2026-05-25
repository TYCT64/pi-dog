// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from i2c_pwm_board_msgs:srv/DriveMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "i2c_pwm_board_msgs/srv/detail/drive_mode__struct.h"
#include "i2c_pwm_board_msgs/srv/detail/drive_mode__type_support.h"
#include "i2c_pwm_board_msgs/srv/detail/drive_mode__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DriveMode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveMode_Request_type_support_ids_t;

static const _DriveMode_Request_type_support_ids_t _DriveMode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveMode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveMode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveMode_Request_type_support_symbol_names_t _DriveMode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, i2c_pwm_board_msgs, srv, DriveMode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, i2c_pwm_board_msgs, srv, DriveMode_Request)),
  }
};

typedef struct _DriveMode_Request_type_support_data_t
{
  void * data[2];
} _DriveMode_Request_type_support_data_t;

static _DriveMode_Request_type_support_data_t _DriveMode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveMode_Request_message_typesupport_map = {
  2,
  "i2c_pwm_board_msgs",
  &_DriveMode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DriveMode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DriveMode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveMode_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveMode_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_hash,
  &i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_description,
  &i2c_pwm_board_msgs__srv__DriveMode_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, i2c_pwm_board_msgs, srv, DriveMode_Request)() {
  return &::i2c_pwm_board_msgs::srv::rosidl_typesupport_c::DriveMode_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "i2c_pwm_board_msgs/srv/detail/drive_mode__struct.h"
// already included above
// #include "i2c_pwm_board_msgs/srv/detail/drive_mode__type_support.h"
// already included above
// #include "i2c_pwm_board_msgs/srv/detail/drive_mode__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DriveMode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveMode_Response_type_support_ids_t;

static const _DriveMode_Response_type_support_ids_t _DriveMode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveMode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveMode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveMode_Response_type_support_symbol_names_t _DriveMode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, i2c_pwm_board_msgs, srv, DriveMode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, i2c_pwm_board_msgs, srv, DriveMode_Response)),
  }
};

typedef struct _DriveMode_Response_type_support_data_t
{
  void * data[2];
} _DriveMode_Response_type_support_data_t;

static _DriveMode_Response_type_support_data_t _DriveMode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveMode_Response_message_typesupport_map = {
  2,
  "i2c_pwm_board_msgs",
  &_DriveMode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DriveMode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DriveMode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveMode_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveMode_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_hash,
  &i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_description,
  &i2c_pwm_board_msgs__srv__DriveMode_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, i2c_pwm_board_msgs, srv, DriveMode_Response)() {
  return &::i2c_pwm_board_msgs::srv::rosidl_typesupport_c::DriveMode_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "i2c_pwm_board_msgs/srv/detail/drive_mode__struct.h"
// already included above
// #include "i2c_pwm_board_msgs/srv/detail/drive_mode__type_support.h"
// already included above
// #include "i2c_pwm_board_msgs/srv/detail/drive_mode__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DriveMode_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveMode_Event_type_support_ids_t;

static const _DriveMode_Event_type_support_ids_t _DriveMode_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveMode_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveMode_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveMode_Event_type_support_symbol_names_t _DriveMode_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, i2c_pwm_board_msgs, srv, DriveMode_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, i2c_pwm_board_msgs, srv, DriveMode_Event)),
  }
};

typedef struct _DriveMode_Event_type_support_data_t
{
  void * data[2];
} _DriveMode_Event_type_support_data_t;

static _DriveMode_Event_type_support_data_t _DriveMode_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveMode_Event_message_typesupport_map = {
  2,
  "i2c_pwm_board_msgs",
  &_DriveMode_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DriveMode_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DriveMode_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DriveMode_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveMode_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &i2c_pwm_board_msgs__srv__DriveMode_Event__get_type_hash,
  &i2c_pwm_board_msgs__srv__DriveMode_Event__get_type_description,
  &i2c_pwm_board_msgs__srv__DriveMode_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, i2c_pwm_board_msgs, srv, DriveMode_Event)() {
  return &::i2c_pwm_board_msgs::srv::rosidl_typesupport_c::DriveMode_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "i2c_pwm_board_msgs/srv/detail/drive_mode__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _DriveMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DriveMode_type_support_ids_t;

static const _DriveMode_type_support_ids_t _DriveMode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DriveMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DriveMode_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DriveMode_type_support_symbol_names_t _DriveMode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, i2c_pwm_board_msgs, srv, DriveMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, i2c_pwm_board_msgs, srv, DriveMode)),
  }
};

typedef struct _DriveMode_type_support_data_t
{
  void * data[2];
} _DriveMode_type_support_data_t;

static _DriveMode_type_support_data_t _DriveMode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DriveMode_service_typesupport_map = {
  2,
  "i2c_pwm_board_msgs",
  &_DriveMode_service_typesupport_ids.typesupport_identifier[0],
  &_DriveMode_service_typesupport_symbol_names.symbol_name[0],
  &_DriveMode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DriveMode_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DriveMode_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DriveMode_Request_message_type_support_handle,
  &DriveMode_Response_message_type_support_handle,
  &DriveMode_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    i2c_pwm_board_msgs,
    srv,
    DriveMode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    i2c_pwm_board_msgs,
    srv,
    DriveMode
  ),
  &i2c_pwm_board_msgs__srv__DriveMode__get_type_hash,
  &i2c_pwm_board_msgs__srv__DriveMode__get_type_description,
  &i2c_pwm_board_msgs__srv__DriveMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, i2c_pwm_board_msgs, srv, DriveMode)() {
  return &::i2c_pwm_board_msgs::srv::rosidl_typesupport_c::DriveMode_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
