#include "Warrior.h"
#include "defines.h"
#import "Army.h"

#ifndef TP1_KNIGHT_H
#define TP1_KNIGHT_H

class Knight : public Warrior {
private:
public:
    const static int ID = KNIGHT_ID;
    const static int cost = KNIGHT_COST;
    Knight();
    ~Knight() {};
    void FriendlyAction(Unit* unit) {};
    void EnemyAction(Unit* unit) {};
};


#endif //TP1_KNIGHT_H
