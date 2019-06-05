#ifndef PLAYER_H
#define PLAYER_H

#include <string.h>
#include <iostream>
#include <unistd.h>

using namespace std;

class Player {
private:
    int score;
    int number;
public:
    Player();
    Player(int number);

    void addScore(int gain);
    void setNumber(int number);
    int getNumber() const;
    int getScore() const;

    void displayPlayer(ostream & flux) const;

    ~Player();
};

#endif
