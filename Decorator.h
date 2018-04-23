#ifndef TP1_DECORATOR_H
#define TP1_DECORATOR_H

#include "Player.h"

class RegenDecorator: public Unit {
private:
    Unit* unit__;
public:
    RegenDecorator(Unit* unit_) {
        unit__ = unit_;
    }
    void FriendlyAction(Unit* unit) {};
};


#endif //TP1_DECORATOR_H
