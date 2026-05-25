// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from i2c_pwm_board_msgs:srv/StopServos.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "i2c_pwm_board_msgs/srv/stop_servos.hpp"


#ifndef I2C_PWM_BOARD_MSGS__SRV__DETAIL__STOP_SERVOS__BUILDER_HPP_
#define I2C_PWM_BOARD_MSGS__SRV__DETAIL__STOP_SERVOS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "i2c_pwm_board_msgs/srv/detail/stop_servos__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace i2c_pwm_board_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::i2c_pwm_board_msgs::srv::StopServos_Request>()
{
  return ::i2c_pwm_board_msgs::srv::StopServos_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace i2c_pwm_board_msgs


namespace i2c_pwm_board_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::i2c_pwm_board_msgs::srv::StopServos_Response>()
{
  return ::i2c_pwm_board_msgs::srv::StopServos_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace i2c_pwm_board_msgs


namespace i2c_pwm_board_msgs
{

namespace srv
{

namespace builder
{

class Init_StopServos_Event_response
{
public:
  explicit Init_StopServos_Event_response(::i2c_pwm_board_msgs::srv::StopServos_Event & msg)
  : msg_(msg)
  {}
  ::i2c_pwm_board_msgs::srv::StopServos_Event response(::i2c_pwm_board_msgs::srv::StopServos_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::StopServos_Event msg_;
};

class Init_StopServos_Event_request
{
public:
  explicit Init_StopServos_Event_request(::i2c_pwm_board_msgs::srv::StopServos_Event & msg)
  : msg_(msg)
  {}
  Init_StopServos_Event_response request(::i2c_pwm_board_msgs::srv::StopServos_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_StopServos_Event_response(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::StopServos_Event msg_;
};

class Init_StopServos_Event_info
{
public:
  Init_StopServos_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopServos_Event_request info(::i2c_pwm_board_msgs::srv::StopServos_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_StopServos_Event_request(msg_);
  }

private:
  ::i2c_pwm_board_msgs::srv::StopServos_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::i2c_pwm_board_msgs::srv::StopServos_Event>()
{
  return i2c_pwm_board_msgs::srv::builder::Init_StopServos_Event_info();
}

}  // namespace i2c_pwm_board_msgs

#endif  // I2C_PWM_BOARD_MSGS__SRV__DETAIL__STOP_SERVOS__BUILDER_HPP_
