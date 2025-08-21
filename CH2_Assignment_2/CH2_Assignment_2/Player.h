#pragma once
#include "Monster.h"
#include <string>
using namespace std;

class Monster;

// Player 클래스 정의
class Player {
public:
    Player(string nickname);

    // 기본 공격
    virtual void attack() = 0;

    // 몬스터 대상 공격
    virtual void attack(Monster* monster) = 0; // Monster 클래스에 대한 공격

    void printPlayerStatus(); // 상태창 출력

    // getter 함수
    string getJobName(); 
    string getNickname(); 
    int getLevel(); 
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter 함수
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