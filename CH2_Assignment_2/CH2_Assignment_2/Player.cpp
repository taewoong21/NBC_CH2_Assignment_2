#include "Player.h"
#include <iostream>

using namespace std;

// Ŭ���� Player ������
Player::Player(string nickname) : job_name(""), nickname(nickname), level(1), HP(50), MP(50), power(13),
    defence(10), accuracy(50), speed(10) {
}

// ����â ���
void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}

// Getter
string Player::getJobName()     { return job_name; }
string Player::getNickname()    { return nickname; }
int Player::getLevel()          { return level; }
int Player::getHP()             { return HP; }
int Player::getMP()             { return MP; }
int Player::getPower()          { return power; }
int Player::getDefence()        { return defence; }
int Player::getAccuracy()       { return accuracy; }
int Player::getSpeed()          { return speed; }

// Setter
void Player::setNickname(string Nickname) { nickname = Nickname; }

bool Player::setHP(int newHP) {
    if (newHP <= 0) {
        HP = 0;
        return false; // ���
    }
    HP = newHP;
    return true; // ����
}

bool Player::setMP(int newMP) 
{
    if (newMP <= 0) {
        MP = 0;
        return false; // ���� ����
    }
    MP = newMP;
    return true; // ������ ����
}
void Player::setPower(int Power) { power = Power; }
void Player::setDefence(int Defence) { defence = Defence; }
void Player::setAccuracy(int Accuracy) { accuracy = Accuracy; }
void Player::setSpeed(int Speed) { speed = Speed; }