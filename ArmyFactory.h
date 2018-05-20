#include "Warrior.h"
#include "Mage.h"
#include "Ranger.h"
#include <vector>

#ifndef TP1_ARMYFACTORY_H
#define TP1_ARMYFACTORY_H

class ArmyFactory {
public:
    vector <pair<int, int> > war_id;
    vector <pair<int, int> > m_id;
    vector <pair<int, int> > r_id;
    vector<pair<string, vector<pair<string, int>>>> FractionOverview; // описание системы юнитов фракции; вынужденное решение (предполагается сделать это в более простой форме)
    virtual Warrior* createWarrior(int ID) = 0;
    virtual Mage* createMage(int ID) = 0;
    virtual Ranger* createRanger(int ID) = 0;
    ~ArmyFactory() {};
};



#endif //TP1_ARMYFACTORY_H
