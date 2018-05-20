#include "ArmyFactory.h"
#include "UnArcher.h"
#include "UnKnight.h"
#include "UnWizard.h"

#ifndef TP1_UNDEADARMYFACTORY_H
#define TP1_UNDEADARMYFACTORY_H


class UndeadArmyFactory : public ArmyFactory {
public:
    UndeadArmyFactory();
    Warrior* createWarrior(int ID);
    Mage* createMage(int ID);
    Ranger* createRanger(int ID);
};


#endif //TP1_UNDEADARMYFACTORY_H
