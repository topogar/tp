#include "defines.h"
#include "Warrior.h"

#ifndef TP1_UNKNIGHT_H
#define TP1_UNKNIGHT_H


class UnKnight : public Warrior {
private:
public:
    const static int ID = UNKNIGHT_ID;
    const static int cost = UNKNIGHT_COST;
    UnKnight();
    ~UnKnight() {};
    void FriendlyAction(Unit* unit);
    void EnemyAction(Unit* unit);
};


#endif //TP1_UNKNIGHT_H
