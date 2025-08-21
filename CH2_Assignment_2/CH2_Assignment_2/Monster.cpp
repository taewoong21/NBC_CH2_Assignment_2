#include "Monster.h"
#include "Player.h"
#include <iostream>
#include <algorithm>

Monster::Monster(string name) : name(name), HP(10), power(30), defence(10), speed(10) {
    cout << name << " 이 모습을 드러냅니다." << endl;
}

void Monster::attack(Player* player) {
    if (player == nullptr) {
        cout << "[몬스터] 공격 실패: 대상이 없습니다." << endl;
        return;
    }

    int base = power - player->getDefence();
    int damage = (base > 0) ? base : 1;

    std::cout << "* " << name << "이(가) " << damage << "의 피해를 입혔다!" << endl;

    const int newHP = player->getHP() - damage;
    const bool alive = player->setHP(newHP);

    if (alive) {
        cout << "* 플레이어의 남은 HP: " << player->getHP() << endl;
    }
    else {
        cout << "* 플레이어의 남은 HP: " << player->getHP() << endl;
        cout << "* " << name << "의 승리!" << endl;
    }
}

// getter
string Monster::getName() { return name; }
int Monster::getHP() { return HP; }
int Monster::getPower() { return power; }
int Monster::getDefence() { return defence; }
int Monster::getSpeed() { return speed; }

// setter
void Monster::setName(string Name) { name = Name; }

bool Monster::setHP(int newHP) {
    if (newHP <= 0) {
        HP = 0;
        return false;
    }
    HP = newHP;
    return true;
}

void Monster::setPower(int Power) { power = Power; }
void Monster::setDefence(int Defence) { defence = Defence; }
void Monster::setSpeed(int Speed) { speed = Speed; }
