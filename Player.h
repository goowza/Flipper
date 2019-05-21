#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

class Player {
private:
    int score;
    String name;

public:
    Player();
    Player(String name);

    void addScore(int gain);
    void setName(String name);
    int getScore();

    ~Player();
};

#endif
