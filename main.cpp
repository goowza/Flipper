#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include <unistd.h>
#include "Screen.h"
#include "PinBall.h"
#include "Flipper.h"
#include "BallDetector.h"
using namespace std;

#define PWM_PIN 5

int main(void){

	//PinBall pinball();
	BallDetector b(PWM_PIN);
    while(1){
        printf("%d",b->getSensorValue());
    }
	return 0;
}
