#include "Warrior.h"
#include "Monster.h"
#include <iostream>
// Warrir 클래스 구현

// 클래스 Warrior 생성자
Warrior::Warrior(string nickname) : Player(nickname) { 
    job_name = "전사"; 
    cout << "[전사] " << nickname << " 님이 전사로 전작하였습니다." << endl;
    HP = 80;
}

void Warrior::attack()
{
    cout << "[전사] " << nickname << "이(가) 공격합니다!" << endl;
}

void Warrior::attack(Monster* monster) {
    if (monster == nullptr) {
        cout << "[전사] 공격 실패: 대상이 없습니다." << endl;
        return;
    }
    int base = power - monster->getDefence();
    if (base <= 0) base = 1;

    cout << "* " << monster->getName() << "에게 " << base << "의 피해를 입혔다!" << endl;

    const int newHP = monster->getHP() - base;
    const bool alive = monster->setHP(newHP);

    if (alive) {
        cout << "* " << monster->getName()
            << "의 남은 HP: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
        cout << "* " << nickname << "의 승리!\n";
    }
}
