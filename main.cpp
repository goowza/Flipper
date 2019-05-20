#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include <unistd.h>
#include "Screen.h"
#include "PinBall.h"
using namespace std;

#define PWM_PIN 5

int main(void){
	int i = 0;
	PinBall P;
	P.startGame();
	while(i == 0){
		P.loopGame();
		sleep(5);
		i = P.stopGame();
	}
	return 0;
}