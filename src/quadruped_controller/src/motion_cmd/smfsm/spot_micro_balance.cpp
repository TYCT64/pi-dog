#include "spot_micro_balance.h"
#include "spot_micro_transition_idle.h"
#include "spot_micro_walk.h"
#include "spot_micro_motion_cmd.h"

SpotMicroBalanceState::SpotMicroBalanceState() {
  // 建構子
}

SpotMicroBalanceState::~SpotMicroBalanceState() {
  // 解構子
}

void SpotMicroBalanceState::handleInputCommands(const smk::BodyState& body_state,
                                                const SpotMicroNodeConfig& smnc,
                                                const Command& cmd,
                                                SsourpotMicroMotionCmd* smmc,
                                                smk::BodyState* body_state_cmd) {
  if (smnc.debug_mode) {
    std::cout << "In Spot Micro Balance State" << std::endl;
  }

  // ==========================================
  // 1. 狀態切換檢查
  // ==========================================
  if (cmd.getStandCmd() == true) { 
    // 🌟 收到 2 號鍵，切回純手動的 Stand 模式
    changeState(smmc, std::make_unique<SpotMicroStandState>());

  } else if (cmd.getIdleCmd() == true) {
    changeState(smmc, std::make_unique<SpotMicroTransitionIdleState>());

  } else if (cmd.getWalkCmd() == true) {
    changeState(smmc, std::make_unique<SpotMicroWalkState>());

  } else {
    // ==========================================
    // 2. 搖桿指令與濾波器 (直接沿用父親的變數)
    // ==========================================
    cmd_state_.euler_angs.phi   = cmd.getPhiCmd();
    cmd_state_.euler_angs.theta = cmd.getThetaCmd();
    cmd_state_.euler_angs.psi   = cmd.getPsiCmd();
    
    angle_cmd_filters_.x.setCommand(cmd_state_.euler_angs.phi);
    angle_cmd_filters_.y.setCommand(cmd_state_.euler_angs.theta);
    angle_cmd_filters_.z.setCommand(cmd_state_.euler_angs.psi);

    body_state_cmd->euler_angs.phi = angle_cmd_filters_.x.runTimestepAndGetOutput();
    body_state_cmd->euler_angs.theta = angle_cmd_filters_.y.runTimestepAndGetOutput();
    body_state_cmd->euler_angs.psi = angle_cmd_filters_.z.runTimestepAndGetOutput();

    body_state_cmd->xyz_pos = cmd_state_.xyz_pos;
    body_state_cmd->leg_feet_pos = cmd_state_.leg_feet_pos;

    float imu_roll = smmc->getImuRoll();
    float imu_pitch = smmc->getImuPitch();
    if (std::abs(imu_roll) < 0.05f) imu_roll = 0.0f;
    if (std::abs(imu_pitch) < 0.05f) imu_pitch = 0.0f;
    body_state_cmd->euler_angs.phi -= imu_roll;
    body_state_cmd->euler_angs.theta += imu_pitch;

    // ==========================================
    // 4. 送出運算與發佈 PWM
    // ==========================================
    smmc->setServoCommandMessageData();
    smmc->publishServoProportionalCommand();
  }
}