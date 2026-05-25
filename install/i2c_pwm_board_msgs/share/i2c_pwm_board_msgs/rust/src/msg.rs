#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to i2c_pwm_board_msgs__msg__Position
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

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Position::default())
  }
}

impl rosidl_runtime_rs::Message for Position {
  type RmwMsg = super::msg::rmw::Position;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servo: msg.servo,
        position: msg.position,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      servo: msg.servo,
      position: msg.position,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servo: msg.servo,
      position: msg.position,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__msg__PositionArray
/// the PositionArray message handles multiple position assignments
/// of servos.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: Vec<super::msg::Position>,

}



impl Default for PositionArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionArray::default())
  }
}

impl rosidl_runtime_rs::Message for PositionArray {
  type RmwMsg = super::msg::rmw::PositionArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servos: msg.servos
          .into_iter()
          .map(|elem| super::msg::Position::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servos: msg.servos
          .iter()
          .map(|elem| super::msg::Position::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servos: msg.servos
          .into_iter()
          .map(super::msg::Position::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__msg__Servo
/// the Servo message is commonly used message in this package to
/// assign a value to a specific servo. the purpose of the value is
/// dependent on the topic or service being called

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Servo::default())
  }
}

impl rosidl_runtime_rs::Message for Servo {
  type RmwMsg = super::msg::rmw::Servo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servo: msg.servo,
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      servo: msg.servo,
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servo: msg.servo,
      value: msg.value,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__msg__ServoArray
/// the ServoArray message is commonly used message in this package to
/// handle multiple assignments of values to servos. the purpose of
/// the value is dependent on the topic or service being called

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: Vec<super::msg::Servo>,

}



impl Default for ServoArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoArray::default())
  }
}

impl rosidl_runtime_rs::Message for ServoArray {
  type RmwMsg = super::msg::rmw::ServoArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servos: msg.servos
          .into_iter()
          .map(|elem| super::msg::Servo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servos: msg.servos
          .iter()
          .map(|elem| super::msg::Servo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servos: msg.servos
          .into_iter()
          .map(super::msg::Servo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__msg__ServoConfig
/// the ServoConfig message is used to assign specific configuration
/// data to a servo. the data is needed to normalize servos to
/// common values to isolate variations from the rest of the user's
/// robot motion code. 

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoConfig::default())
  }
}

impl rosidl_runtime_rs::Message for ServoConfig {
  type RmwMsg = super::msg::rmw::ServoConfig;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        servo: msg.servo,
        center: msg.center,
        range: msg.range,
        direction: msg.direction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      servo: msg.servo,
      center: msg.center,
      range: msg.range,
      direction: msg.direction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      servo: msg.servo,
      center: msg.center,
      range: msg.range,
      direction: msg.direction,
    }
  }
}


// Corresponds to i2c_pwm_board_msgs__msg__ServoConfigArray
/// the ServoConfigArray message is used to handle multiple assignments
/// of config data to servos. the data is needed to normalize servos to
/// common values to isolate variations from the rest of the user's
/// robot motion code. 

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServoConfigArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub servos: Vec<super::msg::ServoConfig>,

}



impl Default for ServoConfigArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServoConfigArray::default())
  }
}

impl rosidl_runtime_rs::Message for ServoConfigArray {
  type RmwMsg = super::msg::rmw::ServoConfigArray;

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


