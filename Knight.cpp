#include "Knight.h"

Knight::Knight() {
    name = "Knight"; // в идеале - сделать поле статическим, чтобы доступ к нему не зависел от существования объекта
    attack = 0;
    defense = 0;
    health = 0;
    initiative = 0;
}
