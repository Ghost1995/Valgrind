/** @file main.cpp
* @brief It is the main file for testing the valgrind exercise
*
* Copyright [2018] Ashwin Goyal
*/
#include <gtest/gtest.h>

/**
* @brief main function which runs all test results.
*/
int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
