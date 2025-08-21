#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
using namespace std;

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }
    cout << endl;
    player->printPlayerStatus();
    cout << endl;
    player->attack();
    cout << endl;
    

    // 몬스터 출현 시나리오
    Monster* monster = new Monster("고블린");
    cout << "[주의] 몬스터가 출현했습니다." << endl;

    monster->attack(player);
    cout << endl;

    player->attack(monster);
    cout << endl;
    player->attack(monster);
    cout << endl;

    monster->attack(player);
    cout << endl;

    player->attack(monster);
    cout << endl;
 
    player->attack(monster);
    cout << endl;

    

    delete player; 
    delete monster;

    return 0;
}