#include <iostream>
#include <mraa/pwm.h>
#include <mraa/common.h>
#include <unistd.h>
#include "Screen.h"
#include "PinBall.h"
#include "Flipper.h"
#include "BallDetector.h"
using namespace std;


int main(void){
	int fin = 0;
	Pins P;
	P.pinDetectors=0;
	PinBall pinball(P);
	pinball.startGame();
	while(pinball.loopGame()){
		cout << pinball.detectors.getSensorValue()<<endl;
	}
	pinball.stopGame();
	return 0;
}
