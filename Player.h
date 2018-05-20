#include "Menu.h"

#ifndef TP1_PLAYER_H
#define TP1_PLAYER_H

class Player {
private:
    int fraction_ID;
    Army* Player_Army;
    int balance;
    ArmyFactory* factory;
public:
    Player(int balance);
    int ShowFraction();
    void SetFraction();
    void Initialize();
    Army* RetArm() {
        return Player_Army;
    }
};


#endif //TP1_PLAYER_H
