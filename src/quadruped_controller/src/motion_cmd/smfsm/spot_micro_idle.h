#pragma once

#include <iostream>

#include "spot_micro_state.h"
#include "command.h"

// ::public 代表繼承父類別SpotMicroState
class SpotMicroIdleState : public SpotMicroState {
 public:
  SpotMicroIdleState(); // Constructor
  ~SpotMicroIdleState(); // Destructor//
  //virtual代表必須在.cpp中實作
  virtual void handleInputCommands(const smk::BodyState& body_state,
                                   const SpotMicroNodeConfig& smnc,
                                   const Command& cmd,
                                   SpotMicroMotionCmd* smmc, 
                                   smk::BodyState* body_state_cmd);

  virtual std::string getCurrentStateName() {
    return "Idle";
  }
};

