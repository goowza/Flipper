#include <iostream>
#include <unistd.h>
#include "PinBall.h"

using namespace std;

PinBall::PinBall(){
	/*buzzer(pin_definition.pinBuzzer)
	 {
	vector<int>::iterator it;

	this->nbTry = 0;*/

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
	this->scoreboard.Ecrire("Lancement du jeu...");

}

void PinBall::loopGame(){
	this->scoreboard.clearScreen();
	this->scoreboard.nbLine(2,1);
	this->scoreboard.home();
	this->scoreboard.afficherScore(this->player);
}

int PinBall::stopGame(){
	this->scoreboard.clearScreen();
	this->scoreboard.home();	
	this->scoreboard.Ecrire("Fin du jeu");
	return -1;
}
int PinBall::getNbTry(){
	return this->nbTry;
}
