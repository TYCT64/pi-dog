// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from i2c_pwm_board_msgs:srv/IntValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "i2c_pwm_board_msgs/srv/int_value.hpp"


#ifndef I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__TRAITS_HPP_
#define I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "i2c_pwm_board_msgs/srv/detail/int_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace i2c_pwm_board_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IntValue_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntValue_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

namespace rosidl_generator_traits
{

[[deprecated("use i2c_pwm_board_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const i2c_pwm_board_msgs::srv::IntValue_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  i2c_pwm_board_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use i2c_pwm_board_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const i2c_pwm_board_msgs::srv::IntValue_Request & msg)
{
  return i2c_pwm_board_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<i2c_pwm_board_msgs::srv::IntValue_Request>()
{
  return "i2c_pwm_board_msgs::srv::IntValue_Request";
}

template<>
inline const char * name<i2c_pwm_board_msgs::srv::IntValue_Request>()
{
  return "i2c_pwm_board_msgs/srv/IntValue_Request";
}

template<>
struct has_fixed_size<i2c_pwm_board_msgs::srv::IntValue_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<i2c_pwm_board_msgs::srv::IntValue_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<i2c_pwm_board_msgs::srv::IntValue_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace i2c_pwm_board_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IntValue_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntValue_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntValue_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

namespace rosidl_generator_traits
{

[[deprecated("use i2c_pwm_board_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const i2c_pwm_board_msgs::srv::IntValue_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  i2c_pwm_board_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use i2c_pwm_board_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const i2c_pwm_board_msgs::srv::IntValue_Response & msg)
{
  return i2c_pwm_board_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<i2c_pwm_board_msgs::srv::IntValue_Response>()
{
  return "i2c_pwm_board_msgs::srv::IntValue_Response";
}

template<>
inline const char * name<i2c_pwm_board_msgs::srv::IntValue_Response>()
{
  return "i2c_pwm_board_msgs/srv/IntValue_Response";
}

template<>
struct has_fixed_size<i2c_pwm_board_msgs::srv::IntValue_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<i2c_pwm_board_msgs::srv::IntValue_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<i2c_pwm_board_msgs::srv::IntValue_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace i2c_pwm_board_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IntValue_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntValue_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntValue_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

namespace rosidl_generator_traits
{

[[deprecated("use i2c_pwm_board_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const i2c_pwm_board_msgs::srv::IntValue_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  i2c_pwm_board_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use i2c_pwm_board_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const i2c_pwm_board_msgs::srv::IntValue_Event & msg)
{
  return i2c_pwm_board_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<i2c_pwm_board_msgs::srv::IntValue_Event>()
{
  return "i2c_pwm_board_msgs::srv::IntValue_Event";
}

template<>
inline const char * name<i2c_pwm_board_msgs::srv::IntValue_Event>()
{
  return "i2c_pwm_board_msgs/srv/IntValue_Event";
}

template<>
struct has_fixed_size<i2c_pwm_board_msgs::srv::IntValue_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<i2c_pwm_board_msgs::srv::IntValue_Event>
  : std::integral_constant<bool, has_bounded_size<i2c_pwm_board_msgs::srv::IntValue_Request>::value && has_bounded_size<i2c_pwm_board_msgs::srv::IntValue_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<i2c_pwm_board_msgs::srv::IntValue_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<i2c_pwm_board_msgs::srv::IntValue>()
{
  return "i2c_pwm_board_msgs::srv::IntValue";
}

template<>
inline const char * name<i2c_pwm_board_msgs::srv::IntValue>()
{
  return "i2c_pwm_board_msgs/srv/IntValue";
}

template<>
struct has_fixed_size<i2c_pwm_board_msgs::srv::IntValue>
  : std::integral_constant<
    bool,
    has_fixed_size<i2c_pwm_board_msgs::srv::IntValue_Request>::value &&
    has_fixed_size<i2c_pwm_board_msgs::srv::IntValue_Response>::value
  >
{
};

template<>
struct has_bounded_size<i2c_pwm_board_msgs::srv::IntValue>
  : std::integral_constant<
    bool,
    has_bounded_size<i2c_pwm_board_msgs::srv::IntValue_Request>::value &&
    has_bounded_size<i2c_pwm_board_msgs::srv::IntValue_Response>::value
  >
{
};

template<>
struct is_service<i2c_pwm_board_msgs::srv::IntValue>
  : std::true_type
{
};

template<>
struct is_service_request<i2c_pwm_board_msgs::srv::IntValue_Request>
  : std::true_type
{
};

template<>
struct is_service_response<i2c_pwm_board_msgs::srv::IntValue_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__TRAITS_HPP_
