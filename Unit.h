#include <string>
#include <iostream>
using namespace std;

#ifndef TP1_UNIT_H
#define TP1_UNIT_H

class Unit {
protected:
    string name;
    int attack;
    int health;
    int defense;
    int initiative;
    const string attack_type;
public:
    void info();
};

#endif //TP1_UNIT_H
