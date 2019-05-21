#ifndef FLIPPER_H
#define FLIPPER_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>


class Flipper{
	private:
		Gpio Pin;// Pinu
	public:
		Flipper(int pin);
		~Flipper();
		void up();
		void down();
};

#endif