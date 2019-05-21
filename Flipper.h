#ifndef FLIPPER_H
#define FLIPPER_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>


class Flipper{
	private:
		mraa_gpio_context m_gpio_butt;		
	public:
		Flipper(int pinB);
		~Flipper();
		void setHigh(int button);
		void setDown(int button, int sol);
		void TestFlipper();
};

#endif