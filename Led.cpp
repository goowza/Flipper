#include "Led.h"
#include <unistd.h>
#include <iostream>

Led::Led(int pinB) : DigitalActuator(pinB){}

Led::~Led(){}

void Led::setHigh(){
	mraa_gpio_write(this->m_gpio, 1);
}
void Led::setLow(){
	mraa_gpio_write(this->m_gpio, 0);
}