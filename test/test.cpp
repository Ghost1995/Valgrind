/** @file test.cpp
* @brief It defines a basic test for class AnalogSensor.
*
* Copyright [2018] Ashwin Goyal
*/

#include <gtest/gtest.h>
#include"AnalogSensor.hpp"

/**
 * @brief This is basic test which tests the Read method of class AnalogSensor.
 */
AnalogSensor test(10);
TEST(AnalogSensorTest, ReadTest) {
  EXPECT_EQ(10, test.Read());
}
