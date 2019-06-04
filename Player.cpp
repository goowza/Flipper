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
    sleep(1);
}

void Player::setNumber(int number){
    this->number = number;
}

int Player::getScore(){
    return this->score;
}

Player::~Player(){}
