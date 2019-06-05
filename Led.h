#ifndef LED_H
#define LED_H

#include <iostream>
#include <mraa/common.h>
#include <mraa/aio.h>
#include <mraa/gpio.h>
#include "DigitalActuator.h"
#include <unistd.h>

class Led : public DigitalActuator{
	private:	
	public:
		Led(int pinB);
		~Led();
		void setHigh();
		void setLow();
};

#endif