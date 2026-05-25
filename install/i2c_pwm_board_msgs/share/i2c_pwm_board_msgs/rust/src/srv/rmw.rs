#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__DriveMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__DriveMode_Request__init(msg: *mut DriveMode_Request) -> bool;
    fn i2c_pwm_board_msgs__srv__DriveMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveMode_Request>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__DriveMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveMode_Request>);
    fn i2c_pwm_board_msgs__srv__DriveMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveMode_Request>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__DriveMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpm: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub track: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scale: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Position>,

}



impl Default for DriveMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__DriveMode_Request__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__DriveMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__DriveMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__DriveMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__DriveMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/DriveMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__DriveMode_Request() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__DriveMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__DriveMode_Response__init(msg: *mut DriveMode_Response) -> bool;
    fn i2c_pwm_board_msgs__srv__DriveMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DriveMode_Response>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__DriveMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DriveMode_Response>);
    fn i2c_pwm_board_msgs__srv__DriveMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DriveMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DriveMode_Response>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__DriveMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error: i16,

}



impl Default for DriveMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__DriveMode_Response__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__DriveMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DriveMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__DriveMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__DriveMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__DriveMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DriveMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DriveMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/DriveMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__DriveMode_Response() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__IntValue_Request() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__IntValue_Request__init(msg: *mut IntValue_Request) -> bool;
    fn i2c_pwm_board_msgs__srv__IntValue_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IntValue_Request>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__IntValue_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IntValue_Request>);
    fn i2c_pwm_board_msgs__srv__IntValue_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IntValue_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<IntValue_Request>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__IntValue_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IntValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i16,

}



impl Default for IntValue_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__IntValue_Request__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__IntValue_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IntValue_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__IntValue_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__IntValue_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__IntValue_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IntValue_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IntValue_Request where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/IntValue_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__IntValue_Request() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__IntValue_Response() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__IntValue_Response__init(msg: *mut IntValue_Response) -> bool;
    fn i2c_pwm_board_msgs__srv__IntValue_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IntValue_Response>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__IntValue_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IntValue_Response>);
    fn i2c_pwm_board_msgs__srv__IntValue_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IntValue_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<IntValue_Response>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__IntValue_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IntValue_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error: i16,

}



impl Default for IntValue_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__IntValue_Response__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__IntValue_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IntValue_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__IntValue_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__IntValue_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__IntValue_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IntValue_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IntValue_Response where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/IntValue_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__IntValue_Response() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__ServosConfig_Request() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__ServosConfig_Request__init(msg: *mut ServosConfig_Request) -> bool;
    fn i2c_pwm_board_msgs__srv__ServosConfig_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServosConfig_Request>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__ServosConfig_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServosConfig_Request>);
    fn i2c_pwm_board_msgs__srv__ServosConfig_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServosConfig_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ServosConfig_Request>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__ServosConfig_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServosConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ServoConfig>,

}



impl Default for ServosConfig_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__ServosConfig_Request__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__ServosConfig_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServosConfig_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__ServosConfig_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__ServosConfig_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__ServosConfig_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServosConfig_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServosConfig_Request where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/ServosConfig_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__ServosConfig_Request() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__ServosConfig_Response() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__ServosConfig_Response__init(msg: *mut ServosConfig_Response) -> bool;
    fn i2c_pwm_board_msgs__srv__ServosConfig_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServosConfig_Response>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__ServosConfig_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServosConfig_Response>);
    fn i2c_pwm_board_msgs__srv__ServosConfig_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServosConfig_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ServosConfig_Response>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__ServosConfig_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServosConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error: i16,

}



impl Default for ServosConfig_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__ServosConfig_Response__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__ServosConfig_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServosConfig_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__ServosConfig_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__ServosConfig_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__ServosConfig_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServosConfig_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServosConfig_Response where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/ServosConfig_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__ServosConfig_Response() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__StopServos_Request() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__StopServos_Request__init(msg: *mut StopServos_Request) -> bool;
    fn i2c_pwm_board_msgs__srv__StopServos_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopServos_Request>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__StopServos_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopServos_Request>);
    fn i2c_pwm_board_msgs__srv__StopServos_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopServos_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<StopServos_Request>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__StopServos_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopServos_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for StopServos_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__StopServos_Request__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__StopServos_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopServos_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__StopServos_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__StopServos_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__StopServos_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopServos_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopServos_Request where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/StopServos_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__StopServos_Request() }
  }
}


#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__StopServos_Response() -> *const std::ffi::c_void;
}

#[link(name = "i2c_pwm_board_msgs__rosidl_generator_c")]
extern "C" {
    fn i2c_pwm_board_msgs__srv__StopServos_Response__init(msg: *mut StopServos_Response) -> bool;
    fn i2c_pwm_board_msgs__srv__StopServos_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StopServos_Response>, size: usize) -> bool;
    fn i2c_pwm_board_msgs__srv__StopServos_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StopServos_Response>);
    fn i2c_pwm_board_msgs__srv__StopServos_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StopServos_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<StopServos_Response>) -> bool;
}

// Corresponds to i2c_pwm_board_msgs__srv__StopServos_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopServos_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for StopServos_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !i2c_pwm_board_msgs__srv__StopServos_Response__init(&mut msg as *mut _) {
        panic!("Call to i2c_pwm_board_msgs__srv__StopServos_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StopServos_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__StopServos_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__StopServos_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { i2c_pwm_board_msgs__srv__StopServos_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StopServos_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StopServos_Response where Self: Sized {
  const TYPE_NAME: &'static str = "i2c_pwm_board_msgs/srv/StopServos_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__i2c_pwm_board_msgs__srv__StopServos_Response() }
  }
}






#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__DriveMode() -> *const std::ffi::c_void;
}

// Corresponds to i2c_pwm_board_msgs__srv__DriveMode
#[allow(missing_docs, non_camel_case_types)]
pub struct DriveMode;

impl rosidl_runtime_rs::Service for DriveMode {
    type Request = DriveMode_Request;
    type Response = DriveMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__DriveMode() }
    }
}




#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__IntValue() -> *const std::ffi::c_void;
}

// Corresponds to i2c_pwm_board_msgs__srv__IntValue
#[allow(missing_docs, non_camel_case_types)]
pub struct IntValue;

impl rosidl_runtime_rs::Service for IntValue {
    type Request = IntValue_Request;
    type Response = IntValue_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__IntValue() }
    }
}




#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__ServosConfig() -> *const std::ffi::c_void;
}

// Corresponds to i2c_pwm_board_msgs__srv__ServosConfig
#[allow(missing_docs, non_camel_case_types)]
pub struct ServosConfig;

impl rosidl_runtime_rs::Service for ServosConfig {
    type Request = ServosConfig_Request;
    type Response = ServosConfig_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__ServosConfig() }
    }
}




#[link(name = "i2c_pwm_board_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__StopServos() -> *const std::ffi::c_void;
}

// Corresponds to i2c_pwm_board_msgs__srv__StopServos
#[allow(missing_docs, non_camel_case_types)]
pub struct StopServos;

impl rosidl_runtime_rs::Service for StopServos {
    type Request = StopServos_Request;
    type Response = StopServos_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__i2c_pwm_board_msgs__srv__StopServos() }
    }
}


