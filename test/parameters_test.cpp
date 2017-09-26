#include <gtest/gtest.h>
#include "test_board.h"
#include "rosflight.h"

using namespace rosflight_firmware;

#define EXPECT_PARAM_EQ_INT(id, value) EXPECT_EQ(value, rf.params_.get_param_int(id))
#define EXPECT_PARAM_EQ_FLOAT(id, value) EXPECT_EQ(value, rf.params_.get_param_float(id))

TEST(parameters_test, default_parameters_test)
{
  testBoard board;
  ROSflight rf(board);

  rf.init();

  EXPECT_PARAM_EQ_INT(PARAM_BAUD_RATE, 921600);
  EXPECT_PARAM_EQ_INT(PARAM_SYSTEM_ID, 1);
  EXPECT_PARAM_EQ_FLOAT(PARAM_X_EQ_TORQUE, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_Y_EQ_TORQUE, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_Z_EQ_TORQUE, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MOTOR_IDLE_THROTTLE, 0.1f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_FAILSAFE_THROTTLE, 0.3f);
  EXPECT_PARAM_EQ_INT(PARAM_MOTOR_MIN_PWM, 1000);
  EXPECT_PARAM_EQ_INT(PARAM_MOTOR_MAX_PWM, 2000);
  EXPECT_PARAM_EQ_INT(PARAM_SPIN_MOTORS_WHEN_ARMED, 1);
  EXPECT_PARAM_EQ_INT(PARAM_CALIBRATE_GYRO_ON_ARM, 0);
  EXPECT_PARAM_EQ_FLOAT(PARAM_GYRO_X_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_GYRO_Y_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_GYRO_Z_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_ACC_X_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_ACC_Y_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_ACC_Z_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_ACC_X_TEMP_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_ACC_Y_TEMP_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_ACC_Z_TEMP_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A11_COMP, 1.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A12_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A13_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A21_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A22_COMP, 1.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A23_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A31_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A32_COMP, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_A33_COMP, 1.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_X_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_Y_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_MAG_Z_BIAS, 0.0f);
  EXPECT_PARAM_EQ_FLOAT(PARAM_BARO_BIAS, 0.0f);
  EXPECT_PARAM_EQ_INT(PARAM_RC_TYPE, 1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_X_CHANNEL, 0);
  EXPECT_PARAM_EQ_INT(PARAM_RC_Y_CHANNEL, 1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_Z_CHANNEL, 3);
  EXPECT_PARAM_EQ_INT(PARAM_RC_F_CHANNEL, 2);
  EXPECT_PARAM_EQ_INT(PARAM_RC_ATTITUDE_OVERRIDE_CHANNEL, 4);
  EXPECT_PARAM_EQ_INT(PARAM_RC_THROTTLE_OVERRIDE_CHANNEL, 4);
  EXPECT_PARAM_EQ_INT(PARAM_RC_ATT_CONTROL_TYPE_CHANNEL, -1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_ARM_CHANNEL, -1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_NUM_CHANNELS, 6);
  EXPECT_PARAM_EQ_INT(PARAM_RC_SWITCH_5_DIRECTION, 1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_SWITCH_6_DIRECTION, 1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_SWITCH_7_DIRECTION, 1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_SWITCH_8_DIRECTION, 1);
  EXPECT_PARAM_EQ_FLOAT(PARAM_RC_OVERRIDE_DEVIATION, 0.1f);
  EXPECT_PARAM_EQ_INT(PARAM_RC_OVERRIDE_TAKE_MIN_THROTTLE, 1);
  EXPECT_PARAM_EQ_INT(PARAM_RC_ATTITUDE_MODE, 1);
  EXPECT_PARAM_EQ_INT(PARAM_MIXER, Mixer::INVALID_MIXER);
  EXPECT_PARAM_EQ_INT(PARAM_FIXED_WING, 0);
  EXPECT_PARAM_EQ_INT(PARAM_AILERON_REVERSE, 0);
  EXPECT_PARAM_EQ_INT(PARAM_ELEVATOR_REVERSE, 0);
  EXPECT_PARAM_EQ_INT(PARAM_RUDDER_REVERSE, 0);
  EXPECT_PARAM_EQ_FLOAT(PARAM_ARM_THRESHOLD, 0.15f);
}
