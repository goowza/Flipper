#include "Flipper.h"
#include <unistd.h>
#include <iostream>

Flipper::Flipper(int pin){
	this->Pin(pin);
	this->Pin.dir(DIR_OUT_LOW);
}

void Flipper::up(){
	this->Pin.write(1);
}

void Flipper::down(){
	this->Pin.write(0);
}