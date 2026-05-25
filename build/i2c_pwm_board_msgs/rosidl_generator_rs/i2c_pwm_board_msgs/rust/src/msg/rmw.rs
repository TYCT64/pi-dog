#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__Position() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__msg__Position__init(msg: *mut Position) -> bool;
    fn i2c_pwm_board_msgs__msg__Position__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Position>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__msg__Position__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Position>);
    fn i2c_pwm_board_msgs__msg__Position__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Position>, out_seq: *mut rosidl_runtime_rs::Sequence<Position>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__msg__Position
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the position message is used when configuring drive mode to
/// assign a  servo to a specific wheel positon in the drive system
/// postions are specific toe the desired drive mode
/// ackerman has only one position
/// 1 = drive
/// differential has two positons
/// 1 = left, 2 = right
/// mecanum has four positions
/// 1 = front left, 2 = front right, 3 = rear left, 4 = rear right
/// multiple servos/motors may be used for each positon

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Position {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servo: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: i16,

}



impl Default for Position {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__msg__Position__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__msg__Position__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Position {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__Position__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__Position__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__Position__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Position {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Position where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/msg/Position";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__Position() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__PositionArray() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__msg__PositionArray__init(msg: *mut PositionArray) -> bool;
    fn i2c_pwm_board_msgs__msg__PositionArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PositionArray>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__msg__PositionArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PositionArray>);
    fn i2c_pwm_board_msgs__msg__PositionArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PositionArray>, out_seq: *mut rosidl_runtime_rs::Sequence<PositionArray>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__msg__PositionArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the PositionArray message handles multiple position assignments
/// of servos.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Position>,

}



impl Default for PositionArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__msg__PositionArray__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__msg__PositionArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PositionArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__PositionArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__PositionArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__PositionArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PositionArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PositionArray where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/msg/PositionArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__PositionArray() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__Servo() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__msg__Servo__init(msg: *mut Servo) -> bool;
    fn i2c_pwm_board_msgs__msg__Servo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Servo>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__msg__Servo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Servo>);
    fn i2c_pwm_board_msgs__msg__Servo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Servo>, out_seq: *mut rosidl_runtime_rs::Sequence<Servo>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__msg__Servo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the Servo message is commonly used message in this package to
/// assign a value to a specific servo. the purpose of the value is
/// dependent on the topic or service being called

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Servo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servo: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f32,

}



impl Default for Servo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__msg__Servo__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__msg__Servo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Servo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__Servo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__Servo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__Servo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Servo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Servo where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/msg/Servo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__Servo() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__ServoArray() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__msg__ServoArray__init(msg: *mut ServoArray) -> bool;
    fn i2c_pwm_board_msgs__msg__ServoArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoArray>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__msg__ServoArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoArray>);
    fn i2c_pwm_board_msgs__msg__ServoArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoArray>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__msg__ServoArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the ServoArray message is commonly used message in this package to
/// handle multiple assignments of values to servos. the purpose of
/// the value is dependent on the topic or service being called

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Servo>,

}



impl Default for ServoArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__msg__ServoArray__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__msg__ServoArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoArray where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/msg/ServoArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__ServoArray() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__ServoConfig() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__msg__ServoConfig__init(msg: *mut ServoConfig) -> bool;
    fn i2c_pwm_board_msgs__msg__ServoConfig__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoConfig>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__msg__ServoConfig__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoConfig>);
    fn i2c_pwm_board_msgs__msg__ServoConfig__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoConfig>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoConfig>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__msg__ServoConfig
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the ServoConfig message is used to assign specific configuration
/// data to a servo. the data is needed to normalize servos to
/// common values to isolate variations from the rest of the user's
/// robot motion code. 

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoConfig {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servo: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub center: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub range: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub direction: i16,

}



impl Default for ServoConfig {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__msg__ServoConfig__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__msg__ServoConfig__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoConfig {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoConfig__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoConfig__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoConfig__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoConfig {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoConfig where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/msg/ServoConfig";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__ServoConfig() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__ServoConfigArray() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__msg__ServoConfigArray__init(msg: *mut ServoConfigArray) -> bool;
    fn i2c_pwm_board_msgs__msg__ServoConfigArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServoConfigArray>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__msg__ServoConfigArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServoConfigArray>);
    fn i2c_pwm_board_msgs__msg__ServoConfigArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServoConfigArray>, out_seq: *mut rosidl_runtime_rs::Sequence<ServoConfigArray>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__msg__ServoConfigArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// the ServoConfigArray message is used to handle multiple assignments
/// of config data to servos. the data is needed to normalize servos to
/// common values to isolate variations from the rest of the user's
/// robot motion code. 

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoConfigArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ServoConfig>,

}



impl Default for ServoConfigArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__msg__ServoConfigArray__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__msg__ServoConfigArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServoConfigArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoConfigArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoConfigArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__msg__ServoConfigArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServoConfigArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServoConfigArray where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/msg/ServoConfigArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__msg__ServoConfigArray() }
  }
}


