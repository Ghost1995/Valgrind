/** @file AnalogSensor.cpp
* @brief It defines class AnalogSensor  and its methods.
*
* Copyright [2018] Ashwin Goyal
*/

#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

/**
 * @brief This is a constructor for the AnalogSensor class. It also initializes the value of number of samples.
 * 
 * @param It takes the number of samples as input.
 */
AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {}

/*
 *  @brief This is the destructor for the class
 */
AnalogSensor::~AnalogSensor() {}

/*
 * @brief This is a method of class AnalogSensor accumulates the readings (starting from zero)
 *
 * @result It gives the final result (accumulated value) as output.
 */
int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(),
                                    readings->end(), 0.0)/readings->size();
    delete readings;
    return result;
}


