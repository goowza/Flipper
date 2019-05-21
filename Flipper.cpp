#include "Flipper.h"
#include <unistd.h>
#include <iostream>

Flipper::Flipper(int pinB) public digitalActuator(int pinS){
	mraa_init();
	this->m_gpio_butt = mraa_gpio_init(pinB);
	mraa_gpio_dir(this->m_gpio_butt, MRAA_GPIO_IN);
}

void Flipper::setHigh(int button){
	if(button){
		mraa_gpio_write(this->m_gpio, 1);		
	}
}

void Flipper::setUp(int button, int sol){
	if(!button && sol)
	{
		mraa_gpio_write(this->m_gpio, 0);		
	}
}

void Flipper::TestFlipper(){
	int stateButton = mraa_gpio_read(this->m_gpio_butt);
	state = mraa_gpio_read(this->m_gpio_sol);
	this->setHigh(stateButton);
	this->setDown(stateButton,state);
}
Flipper::~Flipper(){}