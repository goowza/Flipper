#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include <unistd.h>
#include "Screen.h"
#include "PinBall.h"
#include "Flipper.h"
using namespace std;

#define PWM_PIN 5

int main(void){

	PinBall pinball();
	pinball.startGame();

	return 0;
}