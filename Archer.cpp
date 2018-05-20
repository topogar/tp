#include "Archer.h"

Archer::Archer() {
    name = "Archer";
    attack = 10;
    defense = 2;
    health = 25;
    initiative = 2;
}

void Archer::EnemyAction(Unit *unit) {
    unit->health -= attack;
}

void Archer::FriendlyAction(Unit *unit) {
    unit->defense += attack;
}