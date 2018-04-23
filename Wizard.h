#include "Mage.h"
#include "defines.h"
#include "Army.h"

#ifndef TP1_WIZARD_H
#define TP1_WIZARD_H

class Wizard : public Mage {
private:
public:
    const static int ID = WIZARD_ID;
    const static int cost = WIZARD_COST;
    Wizard();
    ~Wizard() {};
    virtual void FriendlyAction(Unit* unit);
    virtual void EnemyAction(Unit* unit);
};

#endif //TP1_WIZARD_H
