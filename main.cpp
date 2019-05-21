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
	int i = 0;
	Flipper f(2);
	PinBall P;
	P.startGame();
	while(i == 0){
		f.up();
		//P.loopGame();
		sleep(5);
		f.down();
		sleep(5)
		//i = P.stopGame();
	}
	return 0;
}