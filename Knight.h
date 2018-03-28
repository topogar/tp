#include "Warrior.h"
#include "defines.h"

#ifndef TP1_KNIGHT_H
#define TP1_KNIGHT_H

class Knight : public Warrior {
private:
public:
    const static int ID = KNIGHT_ID;
    const static int cost = KNIGHT_COST;
    Knight();
    ~Knight() {};
};


#endif //TP1_KNIGHT_H
