#ifndef PWMACTUATOR_H
#define PWMACTUATOR_H

#include <mraa/gpio.h>
#include <mraa/pwm.h>

class PWMActuator {

protected:
    float duty_cycle;
    mraa_pwm_context pwm_context;

public:
    PWMActuator();
    PWMActuator(int pin);
    void setDutyCycle(float duty_cycle);
    void setPeriodUs(int period);
    ~PWMActuator();
};




#endif
