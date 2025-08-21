#include "Thief.h"
#include "Monster.h"
#include <iostream>

Thief::Thief(string nickname) : Player(nickname) { 
    job_name = "����"; 
    cout << "[����] " << nickname << " ���� �������� �����Ͽ����ϴ�." << endl;
    speed = 80;
}

void Thief::attack() {
    cout << "[����] " << nickname << "��(��) �����մϴ�!" << endl;
}

void Thief::attack(Monster* monster) {
    if (monster == nullptr) {
        cout << "[����] ���� ����: ����� �����ϴ�." << endl;
        return;
    }
    int base = power - monster->getDefence();
    if (base <= 0) base = 1;

    int perHit = base / 5;
    if (perHit <= 0) perHit = 1;

    int total = perHit * 5;

    for (int i = 0; i < 5; ++i) {
        cout << "* " << monster->getName() << "���� �ܰ����� " << perHit << "�� ���ظ� ������!" << endl;
    }

    const int newHP = monster->getHP() - total;
    const bool alive = monster->setHP(newHP);

    if (alive) {
        cout << "* " << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;;
    }
    else {
        cout << "* " << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
        cout << "* " << nickname << "�� �¸�!" << endl;
    }
}
