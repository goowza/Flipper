#include <iostream>
#include <unistd.h>
#include "PinBall.h"

using namespace std;

PinBall::PinBall(){
	this->nbTry = 0;
	this->player = new Player();
	this->sc = new Screen();
}
PinBall::~PinBall(){}

void PinBall::startGame(){
	
	sc.initScreen();
	sc.home();
	sc.Ecrire("Le flipper ") ;
	sc.nbLine(9,1);	
	sc.Ecrire("trop bien");
	sleep(20);
	sc.home();
	sc.clearScreen();
	sc.Ecrire("Lancement du jeu");
	sleep(4);
}

void PinBall::loopGame(){
	sc.clearScreen();
	sc.nbLine(2,1);
	sc.home();
	sc.afficherScore(this->player);
}

int PinBall::stopGame(){
	sc.clearScreen();
	sc.home();	
	sc.Ecrire("Fin du jeu");
	return -1;
}
int PinBall::getNbTry(){
	return this->nbTry;
}
