#include "Thief.h"
#include "Monster.h"
#include <iostream>

Thief::Thief(string nickname) : Player(nickname) { 
    job_name = "도적"; 
    cout << "[도적] " << nickname << " 님이 도적으로 전작하였습니다." << endl;
    speed = 80;
}

void Thief::attack() {
    cout << "[도적] " << nickname << "이(가) 공격합니다!" << endl;
}

void Thief::attack(Monster* monster) {
    if (monster == nullptr) {
        cout << "[도적] 공격 실패: 대상이 없습니다." << endl;
        return;
    }
    int base = power - monster->getDefence();
    if (base <= 0) base = 1;

    int perHit = base / 5;
    if (perHit <= 0) perHit = 1;

    int total = perHit * 5;

    for (int i = 0; i < 5; ++i) {
        cout << "* " << monster->getName() << "에게 단검으로 " << perHit << "의 피해를 입혔다!" << endl;
    }

    const int newHP = monster->getHP() - total;
    const bool alive = monster->setHP(newHP);

    if (alive) {
        cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;;
    }
    else {
        cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
        cout << "* " << nickname << "의 승리!" << endl;
    }
}
