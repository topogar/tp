//
// Created by egor on 19.05.18.
//

#include "UnKnight.h"


UnKnight::UnKnight() {
    name = "UnKnight"; // в идеале - сделать поле статическим, чтобы доступ к нему не зависел от существования объекта
    attack = 17;
    defense = 13;
    health = 39;
    initiative = 7;
}

void UnKnight::EnemyAction(Unit *unit) {
    unit->defense -= attack;
}

void UnKnight::FriendlyAction(Unit *unit) {
    unit->defense += defense;
}