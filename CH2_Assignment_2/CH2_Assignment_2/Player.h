#pragma once
#include "Monster.h"
#include <string>
using namespace std;

class Monster;

// Player Ŭ���� ����
class Player {
public:
    Player(string nickname);

    // �⺻ ����
    virtual void attack() = 0;

    // ���� ��� ����
    virtual void attack(Monster* monster) = 0; // Monster Ŭ������ ���� ����

    void printPlayerStatus(); // ����â ���

    // getter �Լ�
    string getJobName(); 
    string getNickname(); 
    int getLevel(); 
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter �Լ�
    void setNickname(string Nickname);
    bool setHP(int newHP);
    bool setMP(int newMP);
    void setPower(int Power);
    void setDefence(int Defence);
    void setAccuracy(int Accuracy);
    void setSpeed(int Speed);

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};