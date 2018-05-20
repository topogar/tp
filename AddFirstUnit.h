#include "defines.h"
#include "ArmyFactory.h"
#include "Army.h"

#ifndef TP1_ADDFIRSTUNIT_H
#define TP1_ADDFIRSTUNIT_H


class AddWarriorUnit {
protected:
    AddWarriorUnit *next;
    ArmyFactory *factory;
public:
    AddWarriorUnit(ArmyFactory *factory_) {
        next = 0;
        factory = factory_;
    }
    void setNext(AddWarriorUnit *n) {
        next = n;
    }
    virtual  void add(int key, Army *army, int& balance) {
        int k = 0;
        for (int i = 0; i < factory->war_id.size(); i++)
            if (factory->war_id[i].first == key) {
                if (balance < factory->war_id[i].second) {
                    k = 2;
                    break;
                } else {
                    balance -= factory->war_id[i].second;
                    army->Warriors.push_back(factory->createWarrior(key));
                    k = 1;
                    break;
                }
            }
        if (k == 0) {
            next->add(key, army, balance);
        }
        if (k == 2) {
            cout << "Денег то мало!";
        }
    }
};

class AddRanUnit : public AddWarriorUnit {
public:
    AddRanUnit(ArmyFactory *factory_) : AddWarriorUnit(factory_) {}
    virtual void add(int key, Army *army, int& balance) {
        int k = 0;
        for (int i = 0; i < factory->r_id.size(); i++)
            if (factory->r_id[i].first == key) {
                if (balance < factory->r_id[i].second) {
                    k = 2;
                    break;
                } else {
                    balance -= factory->r_id[i].second;
                    army->Rangers.push_back(factory->createRanger(key));
                    k = 1;
                    break;
                }
            }
        if (k == 0) {
            next->add(key, army, balance);
        }
        if (k == 2) {
            cout << "Денег то мало!";
        }
    }
};

class AddMageUnit : public AddRanUnit {
public:
    AddMageUnit(ArmyFactory *factory_) : AddRanUnit(factory_) {}
    virtual void add(int key, Army *army, int& balance) {
        int k = 0;
        for (int i = 0; i < factory->m_id.size(); i++)
            if (factory->m_id[i].first == key) {
                if (balance < factory->m_id[i].second) {
                    k = 2;
                    break;
                } else {
                    balance -= factory->m_id[i].second;
                    army->Mages.push_back(factory->createMage(key));
                    k = 1;
                    break;
                }
            }
        if (k == 0) {
            cout << "Please, vvedite vernoe id, иначе я ne prekrashu писаt' транслитоm";
        }
        if (k == 2) {
            cout << "Денег то мало!";
        }
    }
};

#endif //TP1_ADDFIRSTUNIT_H
