#include "Knight.h"

Knight::Knight() {
    name = "Knight"; // в идеале - сделать поле статическим, чтобы доступ к нему не зависел от существования объекта
    attack = 15;
    defense = 15;
    health = 30;
    initiative = 7;
}

void Knight::EnemyAction(Unit *unit) {
    unit->health -= attack;
}

void Knight::FriendlyAction(Unit *unit) {
    unit->defense += defense;
}
