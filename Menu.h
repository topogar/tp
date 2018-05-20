#include "HumanArmyFactory.h"
#include "UndeadArmyFactory.h"
#include "Army.h"
#include "AddFirstUnit.h"


#ifndef TP1_MENU_H
#define TP1_MENU_H

class Menu {
public:
    Army* CreateArmy(int &balance, ArmyFactory* factory);
};


#endif //TP1_MENU_H
