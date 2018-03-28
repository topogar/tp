#include "HumanArmyFactory.h"

HumanArmyFactory::HumanArmyFactory() {
    vector<pair<string, int>> Warriors = { make_pair("Knight", KNIGHT_COST) }; // статическое имя юнита пригодилось бы здесь (Knight::name вместо "Knight")
    vector<pair<string, int>> Mages = { make_pair("Wizard", WIZARD_COST) };
    vector<pair<string, int>> Rangers = { make_pair("Archer", ARCHER_COST) };
    FractionOverview.push_back(make_pair("Warriors", Warriors));
    FractionOverview.push_back(make_pair("Mages", Mages));
    FractionOverview.push_back(make_pair("Rangers", Rangers));
}

Warrior* HumanArmyFactory::createWarrior(int ID) {
    switch (ID) {
        case Knight::ID:
            return new Knight;
    }
}

Mage* HumanArmyFactory::createMage(int ID) {
    switch (ID) {
        case Wizard::ID:
            return new Wizard;
    }
}

Ranger* HumanArmyFactory::createRanger(int ID) {
    switch (ID) {
        case Archer::ID:
            return new Archer;
    }
}