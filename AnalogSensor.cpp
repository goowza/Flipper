#include "AnalogSensor.h"

AnalogSensor::AnalogSensor(int pin) {
    this->aio_context = mraa_aio_init(pin);
}

int AnalogSensor::getSensorValue() {
    return mraa_aio_read(this->aio_context);
}

AnalogSensor::~AnalogSensor() {
    mraa_aio_close(this->aio_context);
}