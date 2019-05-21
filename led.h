#ifndef LED_H
#define LED_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>


class Led{
	private:	
	public:
		Led(int pinB);
		~Led();
		void setHigh();
		void setDown();
};

#endif