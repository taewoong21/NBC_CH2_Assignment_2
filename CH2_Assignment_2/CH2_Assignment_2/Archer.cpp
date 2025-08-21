#include "Archer.h"
#include "Monster.h"
#include <iostream>

Archer::Archer(string nickname) : Player(nickname) { 
    job_name = "�ü�"; 
    cout << "[�ü�] " << nickname << " ���� �ü��� �����Ͽ����ϴ�." << endl;
    accuracy = 80;
}

void Archer::attack() 
{
    cout << "[�ü�] " << nickname << "��(��) ȭ���� �߻��մϴ�!" << endl;
}

void Archer::attack(Monster* monster) {
    if (monster == nullptr) {
        cout << "[�ü�] ���� ����: ����� �����ϴ�."<< endl;
        return;
    }
    int base = power - monster->getDefence();
    if (base <= 0) base = 1;

    int perHit = base / 3;
    if (perHit <= 0) perHit = 1;

    int total = perHit * 3;

    for (int i = 0; i < 3; ++i) {
        cout << "* " << monster->getName() << "���� ȭ��� " << perHit << "�� ���ظ� ������!" << endl;
    }

    const int newHP = monster->getHP() - total;
    const bool alive = monster->setHP(newHP);

    if (alive) {
        std::cout << "* " << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
        cout << "* " << nickname << "�� �¸�!" << endl;
    }
}
