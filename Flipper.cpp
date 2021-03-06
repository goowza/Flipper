#include "Flipper.h"

Flipper::Flipper() : DigitalActuator(){}

Flipper::Flipper(int pinB, int pinS) : DigitalActuator(pinS){
	this->m_gpio_butt = mraa_gpio_init(pinB);
	mraa_gpio_dir(this->m_gpio_butt, MRAA_GPIO_IN);
}

void Flipper::setHigh(){
	int button = this->testButt();
	if(button){
		mraa_gpio_write(this->m_gpio, 1);		
	}
}

void Flipper::setLow(){
	int button = testButt();
	int sol = testFlipper();	
	if(!button && sol)
	{
		mraa_gpio_write(this->m_gpio, 0);		
	}
}

int Flipper::testButt()
{
	int stateButton = mraa_gpio_read(this->m_gpio_butt);
	return stateButton;
}

int Flipper::testFlipper(){
	//int state = mraa_gpio_read(this->m_gpio_sol);
	return -1;
}

void Flipper::switchState(){
	this->setHigh();
	this->setLow();
}
Flipper::~Flipper(){}
