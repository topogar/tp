//
// Created by egor on 19.05.18.
//

#include "UnArcher.h"


UnArcher::UnArcher() {
    name = "UnArcher";
    attack = 12;
    defense = 0;
    health = 24;
    initiative = 2;
}

void UnArcher::EnemyAction(Unit *unit) {
    unit->health -= attack;
}

void UnArcher::FriendlyAction(Unit *unit) {
    unit->defense += attack;
}