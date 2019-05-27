#include "Player.h"

Player::Player(){
    this->score = 0;
    this->number = 1;
}

Player::Player(String name){
    this->score = 0;
    this->number = number;
}

void Player::addScore(int gain){
    this->score += gain;
}

void setNumber(int number){
    this->number = number;
}

int Player::getScore(){
    return this->score;
}

Player::~Player(){}