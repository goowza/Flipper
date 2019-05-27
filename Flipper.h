#ifndef FLIPPER_H
#define FLIPPER_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>
#include "DigitalActuator.h"

class Flipper : public DigitalActuator{
	private:
		mraa_gpio_context m_gpio_butt;		
	public:
		Flipper();
		Flipper(int pinB, int pinS);
		~Flipper();
		void setHigh();
		void setLow();
		void TestFlipper();
};

#endif