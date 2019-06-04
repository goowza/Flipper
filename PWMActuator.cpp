#include "PWMActuator.h"

PWMActuator::PWMActuator(){
    this->pwm_context = mraa_pwm_init(9);
}

PWMActuator::PWMActuator(int pin){
    this->pwm_context = mraa_pwm_init(pin);
    mraa_pwm_period_us(this->pwm_context,2272);
    mraa_pwm_enable(this->pwm_context,1);
    this->duty_cycle = 0.5;
}

void PWMActuator::setDutyCycle(float duty_cycle){
    this->duty_cycle = duty_cycle;
}

void PWMActuator::setPeriodUs(int period){
    mraa_pwm_period_us(this->pwm_context,period);
}

PWMActuator::~PWMActuator(){
    mraa_pwm_close(this->pwm_context);
}
