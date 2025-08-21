#include "Monster.h"
#include "Player.h"
#include <iostream>
#include <algorithm>

Monster::Monster(string name) : name(name), HP(10), power(30), defence(10), speed(10) {
    cout << name << " �� ����� �巯���ϴ�." << endl;
}

void Monster::attack(Player* player) {
    if (player == nullptr) {
        cout << "[����] ���� ����: ����� �����ϴ�." << endl;
        return;
    }

    int base = power - player->getDefence();
    int damage = (base > 0) ? base : 1;

    std::cout << "* " << name << "��(��) " << damage << "�� ���ظ� ������!" << endl;

    const int newHP = player->getHP() - damage;
    const bool alive = player->setHP(newHP);

    if (alive) {
        cout << "* �÷��̾��� ���� HP: " << player->getHP() << endl;
    }
    else {
        cout << "* �÷��̾��� ���� HP: " << player->getHP() << endl;
        cout << "* " << name << "�� �¸�!" << endl;
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
