#include "ArmyFactory.h"
#include "Archer.h"
#include "Knight.h"
#include "Wizard.h"

#ifndef TP1_HUMANARMYFACTORY_H
#define TP1_HUMANARMYFACTORY_H

class HumanArmyFactory : public ArmyFactory {
public:
    HumanArmyFactory();
    Warrior* createWarrior(int ID);
    Mage* createMage(int ID);
    Ranger* createRanger(int ID);
};


#endif //TP1_HUMANARMYFACTORY_H
