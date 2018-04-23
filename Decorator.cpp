//
// Created by egor on 22.04.18.
//

#include "Decorator.h"

void RegenDecorator::FriendlyAction(Unit* unit) {
    health += attack * 0.5;
    unit__->FriendlyAction(unit);
}