#include "Player.h"

Player::Player(){
    this->score = 0;
    this->name = "Anonymous"
}

Player::Player(String name){
    this->score = 0;
    this->name = name;
}

void Player::addScore(int gain){
    this->score += gain;
}

void setName(String name){
    this->name = name;
}

int Player::getScore(){
    return this->score;
}

Player::~Player(){}