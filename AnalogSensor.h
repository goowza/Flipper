#ifndef ANALOG_SENSOR_H
#define ANALOG_SENSOR_H

#include <mraa/aio.h>
#include <mraa/gpio.h>
#include <mraa.hpp>

class AnalogSensor {
private:
    mraa_aio_context aio_context;

public:
    AnalogSensor(int pin);
    int getSensorValue();
    ~AnalogSensor();
};

#endif