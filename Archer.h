#include "Ranger.h"
#include "defines.h"
#ifndef TP1_ARCHER_H
#define TP1_ARCHER_H


class Archer : public Ranger {
private:
public:
    const static int ID = ARCHER_ID;
    const static int cost = ARCHER_COST;
    Archer();
    ~Archer() {};
};


#endif //TP1_ARCHER_H
