#include "Ranger.h"
#include "defines.h"


#ifndef TP1_UNARCHER_H
#define TP1_UNARCHER_H


class UnArcher : public Ranger {
private:
public:
    const static int ID = UNARCHER_ID;
    const static int cost = UNARCHER_COST;
    UnArcher();
    ~UnArcher() {};
    void FriendlyAction(Unit* unit);
    void EnemyAction(Unit* unit);
};


#endif //TP1_UNARCHER_H
