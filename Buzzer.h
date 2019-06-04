#ifndef BUZZER_H
#define BUZZER_H

#include <mraa/gpio.h>
#include <mraa/pwm.h>
#include "PWMActuator.h"
#include <string>
#include <stdlib.h>
#include <list>
#include <iterator>
#include <iostream> 

using namespace std;

/*enum Songs {
    tetris
};

class Buzzer : public PWMActuator{

public:
    Buzzer();
    Buzzer(int pin);
    void playPWM(float duty_cycle);
    void playSong(Songs song);
    void playNote(float freq);
    ~Buzzer();

private:
    //void readSong(const list<pair<string,string> > sequence);
    void readSong(const list<int> sequence);
};*/

#endif
