// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from i2c_pwm_board_msgs:srv/DriveMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "i2c_pwm_board_msgs/srv/drive_mode.hpp"


#ifndef I2C_PWM_BOARD_MSGS__SRV__DETAIL__DRIVE_MODE__STRUCT_HPP_
#define I2C_PWM_BOARD_MSGS__SRV__DETAIL__DRIVE_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'servos'
#include "i2c_pwm_board_msgs/msg/detail/position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Request __declspec(deprecated)
#endif

namespace i2c_pwm_board_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DriveMode_Request_
{
  using Type = DriveMode_Request_<ContainerAllocator>;

  explicit DriveMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->rpm = 0.0f;
      this->radius = 0.0f;
      this->track = 0.0f;
      this->scale = 0.0f;
    }
  }

  explicit DriveMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->rpm = 0.0f;
      this->radius = 0.0f;
      this->track = 0.0f;
      this->scale = 0.0f;
    }
  }

  // field types and members
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _rpm_type =
    float;
  _rpm_type rpm;
  using _radius_type =
    float;
  _radius_type radius;
  using _track_type =
    float;
  _track_type track;
  using _scale_type =
    float;
  _scale_type scale;
  using _servos_type =
    std::vector<i2c_pwm_board_msgs::msg::Position_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<i2c_pwm_board_msgs::msg::Position_<ContainerAllocator>>>;
  _servos_type servos;

  // setters for named parameter idiom
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__rpm(
    const float & _arg)
  {
    this->rpm = _arg;
    return *this;
  }
  Type & set__radius(
    const float & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__track(
    const float & _arg)
  {
    this->track = _arg;
    return *this;
  }
  Type & set__scale(
    const float & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__servos(
    const std::vector<i2c_pwm_board_msgs::msg::Position_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<i2c_pwm_board_msgs::msg::Position_<ContainerAllocator>>> & _arg)
  {
    this->servos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Request
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Request
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveMode_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->rpm != other.rpm) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->track != other.track) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->servos != other.servos) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveMode_Request_

// alias to use template instance with default allocator
using DriveMode_Request =
  i2c_pwm_board_msgs::srv::DriveMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace i2c_pwm_board_msgs


#ifndef _WIN32
# define DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Response __declspec(deprecated)
#endif

namespace i2c_pwm_board_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DriveMode_Response_
{
  using Type = DriveMode_Response_<ContainerAllocator>;

  explicit DriveMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  explicit DriveMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = 0;
    }
  }

  // field types and members
  using _error_type =
    int16_t;
  _error_type error;

  // setters for named parameter idiom
  Type & set__error(
    const int16_t & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Response
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Response
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveMode_Response_ & other) const
  {
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveMode_Response_

// alias to use template instance with default allocator
using DriveMode_Response =
  i2c_pwm_board_msgs::srv::DriveMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace i2c_pwm_board_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Event __attribute__((deprecated))
#else
# define DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Event __declspec(deprecated)
#endif

namespace i2c_pwm_board_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DriveMode_Event_
{
  using Type = DriveMode_Event_<ContainerAllocator>;

  explicit DriveMode_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit DriveMode_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<i2c_pwm_board_msgs::srv::DriveMode_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<i2c_pwm_board_msgs::srv::DriveMode_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Event
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__i2c_pwm_board_msgs__srv__DriveMode_Event
    std::shared_ptr<i2c_pwm_board_msgs::srv::DriveMode_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveMode_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveMode_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveMode_Event_

// alias to use template instance with default allocator
using DriveMode_Event =
  i2c_pwm_board_msgs::srv::DriveMode_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

namespace i2c_pwm_board_msgs
{

namespace srv
{

struct DriveMode
{
  using Request = i2c_pwm_board_msgs::srv::DriveMode_Request;
  using Response = i2c_pwm_board_msgs::srv::DriveMode_Response;
  using Event = i2c_pwm_board_msgs::srv::DriveMode_Event;
};

}  // namespace srv

}  // namespace i2c_pwm_board_msgs

#endif  // I2C_PWM_BOARD_MSGS__SRV__DETAIL__DRIVE_MODE__STRUCT_HPP_
