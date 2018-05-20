#include "UndeadArmyFactory.h"

UndeadArmyFactory::UndeadArmyFactory() {
    vector<pair<string, int>> Warriors = { make_pair("UnKnight", UNKNIGHT_COST) }; // статическое имя юнита пригодилось бы здесь (Knight::name вместо "Knight")
    vector<pair<string, int>> Mages = { make_pair("UnWizard", UNWIZARD_COST) };
    vector<pair<string, int>> Rangers = { make_pair("UnArcher", UNARCHER_COST) };
    FractionOverview.push_back(make_pair("Warriors", Warriors));
    FractionOverview.push_back(make_pair("Mages", Mages));
    FractionOverview.push_back(make_pair("Rangers", Rangers));
    war_id = { make_pair(UnKnight::ID, UNKNIGHT_COST)};
    m_id = {make_pair(UnWizard::ID, UNWIZARD_COST)};
    r_id = {make_pair(UnArcher::ID, UNARCHER_COST)};
}

Warrior* UndeadArmyFactory::createWarrior(int ID) {
    switch (ID) {
        case UnKnight::ID:
            return new UnKnight;
    }
}

Mage* UndeadArmyFactory::createMage(int ID) {
    switch (ID) {
        case UnWizard::ID:
            return new UnWizard;
    }
}

Ranger* UndeadArmyFactory::createRanger(int ID) {
    switch (ID) {
        case UnArcher::ID:
            return new UnArcher;
    }
}