// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from i2c_pwm_board_msgs:srv/IntValue.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "i2c_pwm_board_msgs/srv/int_value.hpp"


#ifndef I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__BUILDER_HPP_
#define I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "i2c_pwm_board_msgs/srv/detail/int_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace builder
{

class Init_IntValue_Request_value
{
public:
  Init_IntValue_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::i2c_pwm_board_msgs::srv::IntValue_Request value(::i2c_pwm_board_msgs::srv::IntValue_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::IntValue_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::i2c_pwm_board_msgs::srv::IntValue_Request>()
{
  return i2c_pwm_board_msgs::srv::builder::Init_IntValue_Request_value();
}

}  // namespace i2c_pwm_board_msgs


namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace builder
{

class Init_IntValue_Response_error
{
public:
  Init_IntValue_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::i2c_pwm_board_msgs::srv::IntValue_Response error(::i2c_pwm_board_msgs::srv::IntValue_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::IntValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::i2c_pwm_board_msgs::srv::IntValue_Response>()
{
  return i2c_pwm_board_msgs::srv::builder::Init_IntValue_Response_error();
}

}  // namespace i2c_pwm_board_msgs


namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace builder
{

class Init_IntValue_Event_response
{
public:
  explicit Init_IntValue_Event_response(::i2c_pwm_board_msgs::srv::IntValue_Event & msg)
  : msg_(msg)
  {}
  ::i2c_pwm_board_msgs::srv::IntValue_Event response(::i2c_pwm_board_msgs::srv::IntValue_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::IntValue_Event msg_;
};

class Init_IntValue_Event_request
{
public:
  explicit Init_IntValue_Event_request(::i2c_pwm_board_msgs::srv::IntValue_Event & msg)
  : msg_(msg)
  {}
  Init_IntValue_Event_response request(::i2c_pwm_board_msgs::srv::IntValue_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_IntValue_Event_response(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::IntValue_Event msg_;
};

class Init_IntValue_Event_info
{
public:
  Init_IntValue_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntValue_Event_request info(::i2c_pwm_board_msgs::srv::IntValue_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_IntValue_Event_request(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::IntValue_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::i2c_pwm_board_msgs::srv::IntValue_Event>()
{
  return i2c_pwm_board_msgs::srv::builder::Init_IntValue_Event_info();
}

}  // namespace i2c_pwm_board_msgs

#endif  // I2C_PWM_BOARD_MSGS__SRV__DETAIL__INT_VALUE__BUILDER_HPP_
