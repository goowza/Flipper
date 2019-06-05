#include "Buzzer.h"

Buzzer::Buzzer() : PWMActuator(){
    this->notes["C"] = 523.25;
    this->notes["D"] = 587.33;
    this->notes["E"] = 659.25;
    this->notes["F"] = 698.46;
    this->notes["G"] = 783.99;
    this->notes["A"] = 880.00;
    this->notes["B"] = 987.77;
    this->notes["CC"] = 1046.50;
    this->notes["DD"] = 1174.66;
    this->notes["EE"] = 1318.51;

}

Buzzer::Buzzer(int pin) : PWMActuator(pin){
    this->notes["C"] = 523.25;
    this->notes["D"] = 587.33;
    this->notes["E"] = 659.25;
    this->notes["F"] = 698.46;
    this->notes["G"] = 783.99;
    this->notes["A"] = 880.00;
    this->notes["B"] = 987.77;
    this->notes["CC"] = 1046.50;
    this->notes["DD"] = 1174.66;
    this->notes["EE"] = 1318.51;
}

void Buzzer::playNote(string note){
    mraa_pwm_enable(this->pwm_context,1);
    mraa_pwm_write(this->pwm_context,0.1f);
    float freq = this->notes[note];
    this->setPeriodUs((int)(1000000.0/freq));
}

void Buzzer::silence(){
    mraa_pwm_write(this->pwm_context,0.0);
    mraa_pwm_enable(this->pwm_context,0);
}

void Buzzer::playStartMusic(){
    this->playNote("E");
    usleep(200000);
    this->silence();
    this->playNote("E");
    usleep(200000);
    this->silence();
    this->playNote("E");
    usleep(300000);
    this->silence();
    this->playNote("C");
    usleep(200000);
    this->silence();
    this->playNote("E");
    usleep(200000);
    this->silence();
    this->playNote("G");
    usleep(400000);
    this->silence();
    this->playNote("C");
    usleep(400000);
    this->silence();
}

void Buzzer::playPointMusic(){
    this->playNote("A");
    usleep(200000);
    this->silence();
    this->playNote("CC");
    usleep(200000);
    this->silence();
    this->playNote("EE");
    usleep(200000);
    this->silence();
}

void Buzzer::playStopMusic(){
    this->playNote("F");
    usleep(200000);
    this->silence();
    this->playNote("D");
    usleep(200000);
    this->silence();
    this->playNote("C");
    usleep(200000);
    this->silence();
}

Buzzer::~Buzzer() {
    this->silence();
}

