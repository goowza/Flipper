#ifndef FLIPPER_H
#define FLIPPER_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>


class Flipper{
	private:
		mraa_gpio_context m_gpio_sol;
		mraa_gpio_context m_gpio_butt;		
	public:
		Flipper(int pinB, int pinS);
		~Flipper();
		void up(int button);
		void down(int button, int sol);
		void TestFlipper();
};

#endif