#include "Unit.h"
#include "defines.h"
#ifndef TP1_MAGE_H
#define TP1_MAGE_H


class Mage : public Unit {
protected:
    const string attack_type = MAGE_TYPE_ATTACK;
    string element;
public:
    //virtual void FriendlyAction() = 0;
    //virtual void EnemyAction() = 0;
};


#endif //TP1_MAGE_H
