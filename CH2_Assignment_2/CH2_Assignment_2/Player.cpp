#include "Player.h"
#include <iostream>

using namespace std;

// 클래스 Player 생성자
Player::Player(string nickname) : job_name(""), nickname(nickname), level(1), HP(50), MP(50), power(13),
    defence(10), accuracy(50), speed(10) {
}

// 상태창 출력
void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
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
        return false; // 사망
    }
    HP = newHP;
    return true; // 생존
}

bool Player::setMP(int newMP) 
{
    if (newMP <= 0) {
        MP = 0;
        return false; // 마나 부족
    }
    MP = newMP;
    return true; // 마나량 갱신
}
void Player::setPower(int Power) { power = Power; }
void Player::setDefence(int Defence) { defence = Defence; }
void Player::setAccuracy(int Accuracy) { accuracy = Accuracy; }
void Player::setSpeed(int Speed) { speed = Speed; }