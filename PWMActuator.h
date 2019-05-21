#ifndef PWMACTUATOR_H
#define PWMACTUATOR_H

#include <mraa/gpio.h>
#include <mraa/pwm.h>

class PWMActuator {
private:
    mraa_pwm_context pwm_context;
    float duty_cycle;

public:
    PWMActuator(int pin);
    ~PWMActuator();
};




#endif