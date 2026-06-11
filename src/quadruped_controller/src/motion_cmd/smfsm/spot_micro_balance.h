#pragma once

#include "spot_micro_stand.h" 
#include "spot_micro_motion_cmd.h"

// 讓 Balance 繼承 Stand (擁有所有站立和遙控器姿態控制的功能)
class SpotMicroBalanceState : public SpotMicroStandState {
 public:
  SpotMicroBalanceState();
  ~SpotMicroBalanceState();

  // 覆寫處理指令的函數，在這裡加上 IMU 數學魔法
  void handleInputCommands(const smk::BodyState& body_state,
                           const SpotMicroNodeConfig& smnc,
                           const Command& cmd,
                           SpotMicroMotionCmd* smmc,
                           smk::BodyState* body_state_cmd) override;

  // 覆寫名字
  std::string getCurrentStateName() override { return "Balance"; }
};