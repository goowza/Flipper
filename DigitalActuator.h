#ifndef DIGI_ACTUATOR_H
#define DIGI_ACTUATOR_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>


class DigitalActuator{
	private:
		mraa_gpio_context m_gpio;	
		int state;
	public:
		DigitalActuator(int pinActuator);
		~DigitalActuator();
		virtual void setHigh()=0;
		virtual void setLow()=0;
};

#endif