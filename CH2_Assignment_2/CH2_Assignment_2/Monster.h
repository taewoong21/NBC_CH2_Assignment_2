#pragma once
#include "Player.h"
#include <string>
using namespace std;

class Player;

class Monster {
public:
    // Monster ������
    // - ������ �̸��� �Ű������� �Է� �޽��ϴ�.
    // - ��� ���ʹ� HP 10, ���ݷ� 30, ���� 10, ���ǵ� 10�� �ɷ�ġ�� �����ϴ�.
    Monster(string name);

    // ������ ���� �Լ�
    // - �÷��̾� ��ü�� �����͸� �Ű������� �Է� �޽��ϴ�.
    // - ������ ���ݷ�-�÷��̾��� ������ �������� �����մϴ�.
    // - ���� ������ ����� �������� 0 ���϶��, �������� 1�� �����մϴ�.
    // - �÷��̾�� �󸶳� �������� �������� ����մϴ�.
    // - setHP �Լ��� �����Ͽ� HP-������ ��� ����� �Ű������� �����մϴ�.
    // - setHP���� ���� ���� ���� ���θ� �������� �б⹮�� ����˴ϴ�.
    // - �������� ���, �÷��̾��� ���� HP�� ����մϴ�.
    // - �������� ������ ���, �÷��̾��� ���� HP�� ������ �¸� ������ ����մϴ�.
    void attack(Player* player);

    // ������ �Ӽ����� �����ϴ� get �Լ�
    string getName();
    int getHP();
    int getPower();
    int getDefence();
    int getSpeed();

    // ������ �Ӽ����� �����ϴ� set �Լ�
    // setHP�� ��� ��Ʋ �ý��ۿ� ����Ǵ� �Լ��̹Ƿ�, ���� ���θ� �����մϴ�.
    // HP�� 1 �̻��� �� true, HP�� 0 ���ϰ� �Ǿ��� �� false�� �����մϴ�.
    // HP�� 1 �̻��� ���� ���ο� HP�� ���Ǹ� �����մϴ�.
    // 0 ������ ��� HP�� 0���� �����մϴ�.
    void setName(string Name);
    bool setHP(int newHP);
    void setPower(int Power);
    void setDefence(int Defence);
    void setSpeed(int Speed);

protected:
    string name; // ������ �̸�
    int HP; // ������ HP
    int power; // ������ ���ݷ�
    int defence; // ������ ����
    int speed; // ������ ���ǵ�
};