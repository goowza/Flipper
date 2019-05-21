#include "Buzzer.h"

Buzzer::Buzzer(int pin) : PWMActuator(pin){
}

void Buzzer::playPWM(float duty_cycle){
    this->duty_cycle = duty_cycle;
    mraa_pwm_write(this->pwm_context,duty_cycle);
}

Buzzer::~Buzzer(){
    ~PWMActuator();
}
