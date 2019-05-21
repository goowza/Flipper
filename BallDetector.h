#ifndef BALLDETECTOR_H
#define BALLDETECTOR_H

#include <mraa/aio.h>
#include <mraa/gpio.h>
#include <mraa.hpp>
#include "AnalogSensor.h"

#define TRESHOLD_DEFAULT 400

class BallDetector {
private:
    int treshold;

public:
    BallDetector(int pin);
    bool isDetected();
    void setTreshold(int treshold);
    ~BallDetector();
};

#endif
