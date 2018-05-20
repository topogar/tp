#include "defines.h"
#include "Mage.h"

#ifndef TP1_UNWIZARD_H
#define TP1_UNWIZARD_H


class UnWizard : public Mage {
private:
public:
    const static int ID = UNWIZARD_ID;
    const static int cost = UNWIZARD_COST;
    UnWizard();
    ~UnWizard() {};
    virtual void FriendlyAction(Unit* unit);
    virtual void EnemyAction(Unit* unit);
};


#endif //TP1_UNWIZARD_H
