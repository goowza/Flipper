#include "DigitalActuator.h"

DigitalActuator::DigitalActuator() {}

DigitalActuator::DigitalActuator(int pinActuator){
	this->m_gpio = mraa_gpio_init(pinActuator);
	mraa_gpio_dir(this->m_gpio, MRAA_GPIO_OUT);
}

DigitalActuator::~DigitalActuator(){}
