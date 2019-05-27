#include <iostream>
#include <unistd.h>
#include "PinBall.h"

using namespace std;

PinBall::PinBall(Pins pin_definition) : 
	buzzer(pin_definition.pinBuzzer)
	 {
	vector<int>::iterator it;

	this->nbTry = 0;

	/*this->flipper_left = new Flipper(pin_definition.pinFlipperButtonLeft,pin_definition.pinFlipperSolenoidLeft);
	this->flipper_right = new Flipper(pin_definition.pinFlipperButtonRight,pin_definition.pinFlipperSolenoidRight);

	for(it = pin_definition.pinDetectors.begin();it != pin_definition.pinDetectors.end();it++){
		this->detectors.push_back(new BallDetector(*it));
	}

	for(it = pin_definition.pinLeds.begin();it != pin_definition.pinLeds.end();it++){
		this->leds.push_back(new Led(*it));
	}*/
}
PinBall::~PinBall(){}


void PinBall::startGame(){
	this->scoreboard->Ecrire("Lancement du jeu...");
	//this->flipper_left.setDown();
	//this->flipper_right.setDown();
}

void PinBall::loopGame(){
	/*sc.clearScreen();
	sc.nbLine(2,1);
	sc.home();
	sc.afficherScore(this->player);*/
}

int PinBall::stopGame(){
	/*sc.clearScreen();
	sc.home();	
	sc.Ecrire("Fin du jeu");*/
	return -1;
}
int PinBall::getNbTry(){
	return this->nbTry;
}
