#pragma once
#include "Player.h"
// Warrior Ŭ���� ����

using namespace std;

class Warrior : public Player {
public:
    Warrior(string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};
