#include "Menu.h"

Army* Menu::CreateArmy(int &balance, ArmyFactory *factory) {
    Army* PlArmy = new Army();
    while (true) {
        cout << "Your balance: " << balance << "\n";
        for (size_t i = 0; i < factory->FractionOverview.size(); i++) {
            cout << i + 1 << ". " << factory->FractionOverview[i].first << "\n";
        }
        cout << "0. Quit\n";
        int type_;
        cin >> type_;
        while (type_ < 0 || type_ > 3) {
            cout << "Эй, ошибся номером, введи верный\n";
            cin >> type_;
        }
        if (type_ == 0) break;

        for (size_t i = 0; i < factory->FractionOverview[type_ - 1].second.size(); i++) {
            cout << i + 1 << ". " << factory->FractionOverview[type_ - 1].second[i].first << " - ";
            cout << factory->FractionOverview[type_ - 1].second[i].second << "\n";
        }
        cout << "0. Back\n";
        int unit_; cin >> unit_; if (unit_ == 0) continue;
        int id_ = (type_ - 1) * 100 + unit_ - 1;
        AddWarriorUnit* w = new AddWarriorUnit(factory);
        AddRanUnit* r = new AddRanUnit(factory);
        AddMageUnit* m = new AddMageUnit(factory);
        r->setNext(m);
        w->setNext(r);
        w->add(id_, PlArmy, balance);
    }
    return PlArmy;
}