#include "Warrior.h"
#include "Mage.h"
#include "Ranger.h"
#include <vector>

#ifndef TP1_ARMY_H
#define TP1_ARMY_H

class Army {
public:
    Army(): Warriors(0), Mages(0), Rangers(0) {

    }
    vector<Warrior*> Warriors;
    vector<Mage*> Mages;
    vector<Ranger*> Rangers;
    void info();
    ~Army();
};


#endif //TP1_ARMY_H
