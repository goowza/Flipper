#include "DigitalActuator.h"
#include <unistd.h>
#include <iostream>

DigitalActuator::DigitalActuator(int pinActuator){
	this->m_gpio = mraa_gpio_init(pinActuator);
	mraa_gpio_dir(this->m_gpio_sol, MRAA_GPIO_OUT);
}

~DigitalActuator(){}
