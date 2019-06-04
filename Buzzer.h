#ifndef BUZZER_H
#define BUZZER_H

#include <mraa/gpio.h>
#include <mraa/pwm.h>
#include "PWMActuator.h"
#include <string>
#include <stdlib>

using namespace std;

class Buzzer : public PWMActuator{

public:
    Buzzer();
    Buzzer(int pin);
    void playPWM(float duty_cycle);
    void playSong();
    ~Buzzer();

private:
    void readSong(const list<pair<string,string>> sequence);
};

#endif
