#include "Army.h"

void Army::info() {
    cout << "Melee:\n";
    for (auto i : Warriors) {
        i->info();
    }
    cout << "\nCasters:\n";
    for (auto i : Mages) {
        i->info();
    }
    cout << "\nRangers:\n";
    for (auto i : Rangers) {
        i->info();
    }
}

Army::~Army() {
    for (auto i : Warriors) {
        delete i;
    }
    for (auto i : Mages) {
        delete i;
    }
    for (auto i : Rangers) {
        delete i;
    }
}