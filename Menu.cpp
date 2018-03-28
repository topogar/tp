#include "Menu.h"

Army* Menu::CreateArmy(int &balance, ArmyFactory *factory) {
    Army* PlArmy = new Army();
    while (true) {
        cout << "Your balance: " << balance << "\n";
        for (size_t i = 0; i < factory->FractionOverview.size(); i++) {
            cout << i + 1 << ". " << factory->FractionOverview[i].first << "\n";
        }
        cout << "0. Quit\n";
        int type_; cin >> type_;
        if (type_ == 0) break;

        for (size_t i = 0; i < factory->FractionOverview[type_ - 1].second.size(); i++) {
            cout << i + 1 << ". " << factory->FractionOverview[type_ - 1].second[i].first << " - ";
            cout << factory->FractionOverview[type_ - 1].second[i].second << "\n";
        }
        cout << "0. Back\n";
        int unit_; cin >> unit_;
        if (unit_ == 0) continue;
        int price = factory->FractionOverview[type_ - 1].second[unit_ - 1].second;
        int id_ = (type_ - 1) * 100 + unit_ - 1;
        if (balance < price) continue;

        balance -= price;

        if (type_ == 1) PlArmy->Warriors.push_back(factory->createWarrior(id_)); // вынужденное решение; по идее, меню ничего не знает о классах юнитов,
        if (type_ == 2) PlArmy->Mages.push_back(factory->createMage(id_)); // а фабрика принимает заказ на юнита по id и сама определяет класс; подход
        if (type_ == 3) PlArmy->Rangers.push_back(factory->createRanger(id_)); // к такому решению пока не найден;
        // в идеале - PlArmy->AddUnit(factory->createUnit(id_))
    }
    return PlArmy;
}