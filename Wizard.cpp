#include "Wizard.h"

Wizard::Wizard() {
    name = "Wizard";
    attack = 14;
    defense = 0;
    health = 20;
    initiative = 5;
    element = "Air";
}

void Wizard::FriendlyAction(Unit* unit) {
    unit->health += attack;
}

void Wizard::EnemyAction(Unit *unit) {
    unit->health -= attack;
}