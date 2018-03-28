#include "Warrior.h"
#include "Mage.h"
#include "Ranger.h"
#include <vector>

#ifndef TP1_ARMYFACTORY_H
#define TP1_ARMYFACTORY_H

class ArmyFactory {
protected:
public:
    vector<pair<string, vector<pair<string, int>>>> FractionOverview; // описание системы юнитов фракции; вынужденное решение (предполагается сделать это в более простой форме)
    virtual Warrior* createWarrior(int ID) = 0;
    virtual Mage* createMage(int ID) = 0;
    virtual Ranger* createRanger(int ID) = 0;
    ~ArmyFactory() {};
};



#endif //TP1_ARMYFACTORY_H
