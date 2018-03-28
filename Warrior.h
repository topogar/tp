#include "Unit.h"
#include "defines.h"

#ifndef TP1_WARRIOR_H
#define TP1_WARRIOR_H

class Warrior : public Unit {
protected:
    const string attack_type = WARRIOR_TYPE_ATTACK;
};


#endif //TP1_WARRIOR_H
