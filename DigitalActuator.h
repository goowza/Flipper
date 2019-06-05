#ifndef DIGI_ACTUATOR_H
#define DIGI_ACTUATOR_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>
#include <unistd.h>

class DigitalActuator{
	protected:
		mraa_gpio_context m_gpio;	
		int state;
	public:
		DigitalActuator();
		DigitalActuator(int pinActuator);
		virtual ~DigitalActuator();
		virtual void setHigh()=0;
		virtual void setLow()=0;
};

#endif