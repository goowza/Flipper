#ifndef BUZZER_H
#define BUZZER_H

#include <mraa/gpio.h>
#include <mraa/pwm.h>
#include "PWMActuator.h"
#include <string>
#include <stdlib.h>
#include <list>
#include <map>
#include <iostream>
#include <unistd.h> 

using namespace std;

class Buzzer : public PWMActuator{

public:
    map<string,float> notes;

    Buzzer();
    Buzzer(int pin);
    void playStartMusic();
    void playPointMusic();
    void playStopMusic();
    void playNote(string note);
    void silence();
    ~Buzzer();

};

#endif
