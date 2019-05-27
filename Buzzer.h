#ifndef BUZZER_H
#define BUZZER_H

#include <mraa/gpio.h>
#include <mraa/pwm.h>
#include "PWMActuator.h"

class Buzzer : public PWMActuator{

public:
    Buzzer();
    Buzzer(int pin);
    void playPWM(float duty_cycle);
    ~Buzzer();
};

#endif
