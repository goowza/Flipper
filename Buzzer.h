#ifndef BUZZER_H
#define BUZZER_H

#include <mraa/gpio.h>
#include <mraa/pwm.h>

class Buzzer {
private:
    mraa_gpio_context gpio_context;
    mraa_pwm_context pwm_context;
    float duty_cycle;

public:
    Buzzer(int pin);

    void playPWM(float duty_cycle);
    ~Buzzer();
};




#endif