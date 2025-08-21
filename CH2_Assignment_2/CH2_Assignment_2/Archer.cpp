#include "Archer.h"
#include "Monster.h"
#include <iostream>

Archer::Archer(string nickname) : Player(nickname) { 
    job_name = "궁수"; 
    cout << "[궁수] " << nickname << " 님이 궁수로 전작하였습니다." << endl;
    accuracy = 80;
}

void Archer::attack() 
{
    cout << "[궁수] " << nickname << "이(가) 화살을 발사합니다!" << endl;
}

void Archer::attack(Monster* monster) {
    if (monster == nullptr) {
        cout << "[궁수] 공격 실패: 대상이 없습니다."<< endl;
        return;
    }
    int base = power - monster->getDefence();
    if (base <= 0) base = 1;

    int perHit = base / 3;
    if (perHit <= 0) perHit = 1;

    int total = perHit * 3;

    for (int i = 0; i < 3; ++i) {
        cout << "* " << monster->getName() << "에게 화살로 " << perHit << "의 피해를 입혔다!" << endl;
    }

    const int newHP = monster->getHP() - total;
    const bool alive = monster->setHP(newHP);

    if (alive) {
        std::cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
        cout << "* " << nickname << "의 승리!" << endl;
    }
}
