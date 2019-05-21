#include "PWMActuator.h"

PWMActuator::PWMActuator(int pin){
    this->pwm_context = mraa_pwm_init(pin);
    mraa_pwm_period_us(this->pwm_context,2272);
    mraa_pwm_enable(this->pwm_context,1);
    this->duty_cycle = 0.5;
}

PWMActuator::~PWMActuator(){
    mraa_pwm_close(this->pwm_context);
}