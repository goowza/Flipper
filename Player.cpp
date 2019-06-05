#include "Player.h"

Player::Player(){
    this->score = 0;
    this->number = 1;
}

Player::Player(int number){
    this->score = 0;
    this->number = number;
}

void Player::addScore(int gain){
    this->score += gain;
}

void Player::setNumber(int number){
    this->number = number;
}

int Player::getScore() const {
    return this->score;
}

int Player::getNumber() const {
    return this->number;
}

Player::~Player(){}

void Player::displayPlayer(ostream & flux) const {
    flux << "Joueur " << this->getNumber() << " : " << this->getScore();
}
