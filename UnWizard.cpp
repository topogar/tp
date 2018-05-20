#include "UnWizard.h"

UnWizard::UnWizard() {
    name = "UnWizard";
    attack = 16;
    defense = 0;
    health = 18;
    initiative = 5;
    element = "Air";
}

void UnWizard::FriendlyAction(Unit* unit) {
    unit->health += attack;
}

void UnWizard::EnemyAction(Unit *unit) {
    unit->health -= attack;
}