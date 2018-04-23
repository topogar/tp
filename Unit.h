#include <string>
#include <iostream>
using namespace std;

#ifndef TP1_UNIT_H
#define TP1_UNIT_H

class Unit {
public:
    string name;
    int attack;
    int health;
    int defense;
    int initiative;
    const string attack_type;
    void info();
    virtual void FriendlyAction(Unit* unit) = 0;
    virtual void EnemyAction(Unit* unit) = 0;
};

#endif //TP1_UNIT_H
