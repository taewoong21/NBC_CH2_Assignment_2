#pragma once
#include "Player.h"
// Warrior 클래스 정의

using namespace std;

class Warrior : public Player {
public:
    Warrior(string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};
