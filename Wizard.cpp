#include "Wizard.h"

Wizard::Wizard() {
    name = "Wizard";
    attack = 0;
    defense = 0;
    health = 0;
    initiative = 0;
    element = "Air";
}

void Wizard::FriendlyAction(Unit* unit) {
    unit->health += attack;
}

void Wizard::EnemyAction(Unit *unit) {
    unit->health -= attack;
}