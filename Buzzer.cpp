#include "Buzzer.h"

Buzzer::Buzzer(int pin){
    this->pwm_context = mraa_pwm_init(pin);
    mraa_pwm_period_us(this->pwm_context,2272);
    mraa_pwm_enable(this->pwm_context,1);
    this->duty_cycle = 0.5;
}

void Buzzer::playPWM(float duty_cycle){
    this->duty_cycle = duty_cycle;
    mraa_pwm_write(this->pwm_context,duty_cycle);
}

Buzzer::~Buzzer(){
    mraa_pwm_close(this->pwm_context);
}