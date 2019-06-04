#ifndef BALLDETECTOR_H
#define BALLDETECTOR_H

#include <mraa/aio.h>
#include <mraa/gpio.h>
#include <mraa.hpp>
#include "AnalogSensor.h"

#define TRESHOLD_DEFAULT 500;

class BallDetector : public AnalogSensor{
private:
    int treshold;

public:
    BallDetector(int pin);
    bool isDetected();
    void setTreshold(int treshold);
    ~BallDetector();
};

#endif
