#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to i2c_pwm_board_msgs__srv__DriveMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: std::string::String,


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
    pub servos: Vec<super::msg::Position>,

}



impl Default for DriveMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DriveMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for DriveMode_Request {
  type RmwMsg = super::srv::rmw::DriveMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
        rpm: msg.rpm,
        radius: msg.radius,
        track: msg.track,
        scale: msg.scale,
        servos: msg.servos
          .into_iter()
          .map(|elem| super::msg::Position::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        mode: msg.mode.as_str().into(),
      rpm: msg.rpm,
      radius: msg.radius,
      track: msg.track,
      scale: msg.scale,
        servos: msg.servos
          .iter()
          .map(|elem| super::msg::Position::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      mode: msg.mode.to_string(),
      rpm: msg.rpm,
      radius: msg.radius,
      track: msg.track,
      scale: msg.scale,
      servos: msg.servos
          .into_iter()
          .map(super::msg::Position::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__srv__DriveMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DriveMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error: i16,

}



impl Default for DriveMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::DriveMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for DriveMode_Response {
  type RmwMsg = super::srv::rmw::DriveMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error: msg.error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error: msg.error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error: msg.error,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__srv__IntValue_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IntValue_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: i16,

}



impl Default for IntValue_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IntValue_Request::default())
  }
}

impl rosidl_runtime_rs::Message for IntValue_Request {
  type RmwMsg = super::srv::rmw::IntValue_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__srv__IntValue_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IntValue_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error: i16,

}



impl Default for IntValue_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::IntValue_Response::default())
  }
}

impl rosidl_runtime_rs::Message for IntValue_Response {
  type RmwMsg = super::srv::rmw::IntValue_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error: msg.error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error: msg.error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error: msg.error,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__srv__ServosConfig_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServosConfig_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: Vec<super::msg::ServoConfig>,

}



impl Default for ServosConfig_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ServosConfig_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ServosConfig_Request {
  type RmwMsg = super::srv::rmw::ServosConfig_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servos: msg.servos
          .into_iter()
          .map(|elem| super::msg::ServoConfig::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servos: msg.servos
          .iter()
          .map(|elem| super::msg::ServoConfig::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servos: msg.servos
          .into_iter()
          .map(super::msg::ServoConfig::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__srv__ServosConfig_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServosConfig_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub error: i16,

}



impl Default for ServosConfig_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ServosConfig_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ServosConfig_Response {
  type RmwMsg = super::srv::rmw::ServosConfig_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        error: msg.error,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      error: msg.error,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      error: msg.error,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__srv__StopServos_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopServos_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for StopServos_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopServos_Request::default())
  }
}

impl rosidl_runtime_rs::Message for StopServos_Request {
  type RmwMsg = super::srv::rmw::StopServos_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__srv__StopServos_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StopServos_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for StopServos_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::StopServos_Response::default())
  }
}

impl rosidl_runtime_rs::Message for StopServos_Response {
  type RmwMsg = super::srv::rmw::StopServos_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
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


