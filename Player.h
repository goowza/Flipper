#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
private:
    int score;
    int number;
public:
    Player();
    Player(int number);

    void addScore(int gain);
    void setNumber(int number);
    int getScore();

    ~Player();
};

#endif
