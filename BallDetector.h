#ifndef BALLDETECTOR_H
#define BALLDETECTOR_H

#include <mraa/aio.h>
#include <mraa/gpio.h>
#include <mraa.hpp>

#define TRESHOLD_DEFAULT 800

class BallDetector {
private:
    mraa_aio_context aio_context;
    int treshold;

public:
    BallDetector(int pin);
    bool isDetected();
    void setTreshold(int treshold);
    int getSensorValue();
    ~BallDetector();
};

#endif