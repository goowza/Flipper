#include "Flipper.h"
#include <unistd.h>
#include <iostream>

Flipper::Flipper(int pin){
	mraa_init();
	this->m_gpio = mraa_gpio_init(pin);
	mraa_gpio_dir(m_gpio, MRAA_GPIO_OUT);
}

void Flipper::up(){
	mraa_gpio_write(this->m_gpio, 1);
}

void Flipper::down(){
	mraa_gpio_write(this->m_gpio, 0);
}