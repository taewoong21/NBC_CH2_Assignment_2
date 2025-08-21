#include "Magician.h"
#include "Monster.h"
#include <iostream>

Magician::Magician(string nickname) : Player(nickname) { 
    job_name = "마법사"; 
    cout << "[마법사] " << nickname << " 님이 마법사로 전작하였습니다." << endl;
    MP = 80;
}

void Magician::attack() 
{
    cout << "[마법사] " << nickname << "이(가) 공격합니다!" << endl;
}

void Magician::attack(Monster* monster) 
{
    if (monster == nullptr) {
        cout << "[마법사] 공격 실패: 대상이 없습니다." << endl;
        return;
    }
    int base = power - monster->getDefence();
    if (base <= 0) base = 1;

    cout << "* " << monster->getName() << "에게 마법으로 " << base << "의 피해를 입혔다!" << endl;

    const int newHP = monster->getHP() - base;
    const bool alive = monster->setHP(newHP);

    if (alive) {
        cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName()<< "의 남은 HP: " << monster->getHP() << endl;
        cout << "* " << nickname << "의 승리!" << endl;
    }
}