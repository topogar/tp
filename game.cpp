#include <string>
#include <vector>
#include <iostream>
#include <map>
using namespace std;

class Unit {
protected:
    string name;
    int attack;
    int health;
    int defense;
    int initiative;
    const string attack_type;
public:
    void info() {
        cout << name << '\n';
    };
};

class Warrior : public Unit {
protected:
    const string attack_type = "Closest target";
};

class Mage : public Unit {
protected:
    const string attack_type = "All targets";
    string element;
};

class Ranger : public Unit {
private:
    const string attack_type = "Any target";
};

class Knight : public Warrior {
private:
public:
    const static int ID = 0;
    const static int cost = 10;
    Knight() {
        name = "Knight";
        attack = 0;
        defense = 0;
        health = 0;
        initiative = 0;
    };
    ~Knight() {};
};

class Archer : public Ranger {
private:
public:
    const static int ID = 200;
    const static int cost = 20;
    Archer() {
        name = "Archer";
        attack = 0;
        defense = 0;
        health = 0;
        initiative = 0;
    };
    ~Archer() {};
};

class Wizard : public Mage {
private:
public:
    const static int ID = 100;
    const static int cost = 30;
    Wizard() {
        name = "Wizard";
        attack = 0;
        defense = 0;
        health = 0;
        initiative = 0;
        element = "Air";
    };
    ~Wizard() {};
};

class Army {
public:
    void AddUnit() {

    }
    vector<Warrior*> Warriors;
    vector<Mage*> Mages;
    vector<Ranger*> Rangers;
    void info() {
        cout << "Warriors:\n";
        for (auto i : Warriors) {
            i->info();
        }
        cout << "Mages:\n";
        for (auto i : Mages) {
            i->info();
        }
        cout << "Rangers:\n";
        for (auto i : Rangers) {
            i->info();
        }
    }
    ~Army() {
        for (auto i : Warriors) {
            delete i;
        }
        for (auto i : Mages) {
            delete i;
        }
        for (auto i : Rangers) {
            delete i;
        }
    }
};

class ArmyFactory {
protected:
public:
    vector<pair<string, vector<pair<string, int>>>> FractionOverview;
    virtual Warrior* createWarrior(int ID) = 0;
    virtual Mage* createMage(int ID) = 0;
    virtual Ranger* createRanger(int ID) = 0;
    ~ArmyFactory() {};
};

class HumanArmyFactory : public ArmyFactory {
public:
    HumanArmyFactory() {
        vector<pair<string, int>> Warriors = { make_pair("Knight", Knight::cost) };
        vector<pair<string, int>> Mages = { make_pair("Wizard", Wizard::cost) };
        vector<pair<string, int>> Rangers = { make_pair("Archer", Archer::cost) };
        FractionOverview.push_back(make_pair("Warriors", Warriors));
        FractionOverview.push_back(make_pair("Mages", Mages));
        FractionOverview.push_back(make_pair("Rangers", Rangers));
    }
    Warrior* createWarrior(int ID) {
        switch (ID) {
            case Knight::ID:
                return new Knight;
        }
    }
    Mage* createMage(int ID) {
        switch (ID) {
            case Wizard::ID:
                return new Wizard;
        }
    }
    Ranger* createRanger(int ID) {
        switch (ID) {
            case Archer::ID:
                return new Archer;
        }
    }
};

class UndeadArmyFactory : public ArmyFactory {
public:

};

class Menu {
public:
    Army* CreateArmy(int &balance, ArmyFactory* factory) {
        Army* PlArmy = new Army();
        while (true) {
            cout << "Your balance: " << balance << "\n";
            for (int i = 0; i < factory->FractionOverview.size(); i++) {
                cout << i + 1 << ". " << factory->FractionOverview[i].first << "\n";
            }
            cout << "0. Quit\n";
            int type_; cin >> type_;
            if (type_ == 0) break;
            for (int i = 0; i < factory->FractionOverview[type_ - 1].second.size(); i++) {
                cout << i + 1 << ". " << factory->FractionOverview[type_ - 1].second[i].first << " - ";
                cout << factory->FractionOverview[type_ - 1].second[i].second << "\n";
            }
            cout << "0. Back\n";
            int unit_; cin >> unit_;
            if (unit_ == 0) continue;
            int price = factory->FractionOverview[type_ - 1].second[unit_ - 1].second;
            int id_ = type_ * 100 + unit_ - 1;
            if (balance < price) continue;
            balance -= price;
            switch (type_) {
                case 1:
                    PlArmy->Warriors.push_back(factory->createWarrior(id_));
                case 2:
                    PlArmy->Mages.push_back(factory->createMage(id_));
                case 3:
                    PlArmy->Rangers.push_back(factory->createRanger(id_));
            }

        }
        PlArmy->info();
        return PlArmy;
    }
};

class Player {
private:
    int fraction_ID;
    Army* Player_Army;
    int balance;
    ArmyFactory* factory;
public:
    Player(int balance): fraction_ID(0), Player_Army(nullptr), balance(balance) {}
    int ShowFraction() {
        return fraction_ID;
    }
    void SetFraction()
    {
        cout << "Choose your fraction:\n1. Humans\n2. Undead\n";
        cin >> fraction_ID;
        switch (fraction_ID) {
            case 1:
                factory = new HumanArmyFactory();
            case 2:
                factory = new HumanArmyFactory();
        }
    }
    void Initialize() {
        SetFraction();
        Menu PlMenu;
        Player_Army = PlMenu.CreateArmy(balance, factory);
    }
};

int main()
{
    int balance;
    cout << "Enter the starting treasury >> ";
    cin >> balance;
    Player Player_1(balance);
    Player_1.Initialize();
    Player Player_2(balance);
    Player_2.Initialize();

    return 0;
}