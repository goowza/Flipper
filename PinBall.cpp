#include <iostream>
#include <unistd.h>
#include "PinBall.h"
#include <vector>
#include <iterator>

using namespace std;

PinBall::PinBall(Pins pin_definition):detectors(pin_definition.pinDetectors){
	/*buzzer(pin_definition.pinBuzzer)
	 {
	this->nbTry = 0;*/

	/*this->flipper_left = new Flipper(pin_definition.pinFlipperButtonLeft,pin_definition.pinFlipperSolenoidLeft);
	this->flipper_right = new Flipper(pin_definition.pinFlipperButtonRight,pin_definition.pinFlipperSolenoidRight);*/
	/*vector<int>::iterator it;	
	for(it = pin_definition.pinDetectors.begin();it != pin_definition.pinDetectors.end();it++){
		this->detectors.push_back(new BallDetector(*it));
	}*/
	this->ButtonStart = mraa_gpio_init(3);
	mraa_gpio_dir(this->ButtonStart, MRAA_GPIO_IN);
}
PinBall::~PinBall(){	
}


void PinBall::startGame(){
	this->scoreboard.write("Lancement du jeu...");
	while(!mraa_gpio_read(this->ButtonStart)){
	}
	this->scoreboard.clearScreen();
	this->scoreboard.displayScore(this->player);
	sleep(1);
}

int PinBall::loopGame(){
	int exit = 1;
	int score = this->player.getScore();
	if(this->detectors.isDetected()){
		this->player.addScore(5);
	}
	if(score != player.getScore()){
		this->scoreboard.displayScore(this->player);
		score = player.getScore();
	}

	if(mraa_gpio_read(this->ButtonStart)){
		exit = 0;
	}
	return exit;
}

int PinBall::stopGame(){
	this->scoreboard.clearScreen();
	this->scoreboard.home();	
	this->scoreboard.write("Fin du jeu");
	return -1;
}
int PinBall::getNbTry(){
	return this->nbTry;
}
