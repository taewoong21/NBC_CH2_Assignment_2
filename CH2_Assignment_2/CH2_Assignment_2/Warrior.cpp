#include "Warrior.h"
#include "Monster.h"
#include <iostream>
// Warrir Ŭ���� ����

// Ŭ���� Warrior ������
Warrior::Warrior(string nickname) : Player(nickname) { 
    job_name = "����"; 
    cout << "[����] " << nickname << " ���� ����� �����Ͽ����ϴ�." << endl;
    HP = 80;
}

void Warrior::attack()
{
    cout << "[����] " << nickname << "��(��) �����մϴ�!" << endl;
}

void Warrior::attack(Monster* monster) {
    if (monster == nullptr) {
        cout << "[����] ���� ����: ����� �����ϴ�." << endl;
        return;
    }
    int base = power - monster->getDefence();
    if (base <= 0) base = 1;

    cout << "* " << monster->getName() << "���� " << base << "�� ���ظ� ������!" << endl;

    const int newHP = monster->getHP() - base;
    const bool alive = monster->setHP(newHP);

    if (alive) {
        cout << "* " << monster->getName()
            << "�� ���� HP: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
        cout << "* " << nickname << "�� �¸�!\n";
    }
}
