/** @file main.cpp
* @brief It is the main file for valgrind exercise
*
* Copyright [2018] Ashwin Goyal
*/

#include <iostream>
#include <AnalogSensor.hpp>

/**

* @brief main function which calls AnalogSensor class and prints the final output.

* @return an integer output just to avoid a warning. Also, it prints the desired output.

*/
int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
