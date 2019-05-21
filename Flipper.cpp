#include "Flipper.h"
#include <unistd.h>
#include <iostream>

Flipper::Flipper(int pinB, int pinS){
	mraa_init();
	this->m_gpio_butt = mraa_gpio_init(pinB);
	this->m_gpio_sol = mraa_gpio_init(pinS);
	mraa_gpio_dir(this->m_gpio_sol, MRAA_GPIO_OUT);
	mraa_gpio_dir(m_gpio_butt, MRAA_GPIO_IN);
}

void Flipper::up(int button){
	if(button){
		mraa_gpio_write(this->m_gpio_sol, 1);		
	}
}

void Flipper::down(int button, int sol){
	if(!button && sol)
	{
		mraa_gpio_write(this->m_gpio_sol, 0);		
	}
}
void Flipper::TestFlipper(){
	int stateButton = mraa_gpio_read(this->m_gpio_butt);
	int stateSol = mraa_gpio_read(this->m_gpio_sol);
	this->up(stateButton);
	this->down(stateButton,stateSol);
}
Flipper::~Flipper(){}