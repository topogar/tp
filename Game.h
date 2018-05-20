#include "Player.h"
#include "Judje.h"
#ifndef TP1_GAME_H
#define TP1_GAME_H


class Game {
private:
    Player* pl1;
    Player* pl2;
public:
    Game(Player* p1, Player* p2) {
        pl1 = p1;
        pl2 = p2;

    }
    int game() {
        int k = 1;
        vector<Unit*> arm1(1);
        Judje judje;
        for (int i = 0; i < pl1->RetArm()->Warriors.size(); i++ ) {
            arm1[0] = static_cast<Unit*>((pl1->RetArm()->Warriors[i]));
        }
        for (int i = 0; i < pl1->RetArm()->Rangers.size(); i++ ) {
            arm1.push_back(pl1->RetArm()->Rangers[i]);
        }
        for (int i = 0; i < pl1->RetArm()->Mages.size(); i++ ) {
            arm1.push_back(pl1->RetArm()->Mages[i]);
        }
        vector<Unit*> arm2;
        for (int i = 0; i < pl2->RetArm()->Warriors.size(); i++ ) {
            arm2.push_back(pl2->RetArm()->Warriors[i]);
        }
        for (int i = 0; i < pl2->RetArm()->Rangers.size(); i++ ) {
            arm2.push_back(pl2->RetArm()->Rangers[i]);
        }
        for (int i = 0; i < pl2->RetArm()->Mages.size(); i++ ) {
            arm2.push_back(pl2->RetArm()->Mages[i]);
        }
        int step = 0;
        while(true) {
            vector<Unit*> at;
            vector<Unit*> def;
            if (step % 2 == 0) {
                at = arm1;
                def = arm2;
            } else {
                at = arm2;
                def = arm1;
            }
            int rd = rand();
            cout << "1 - Хилить, 2 - атаковать\n";
            int t = 3;
            while (t > 2) {
                cin >> t;
            }
            if (t == 1) {
                at[rd % at.size()]->FriendlyAction(at[(rd + rd) % at.size()]);
            }
            if (t == 2) {
                at[rd % at.size()]->EnemyAction(def[(rd + rd) % def.size()]);
                cout << def[(rd + rd) % def.size()]->health;
                if (def[(rd + rd) % def.size()]->health <= 0) {
                    def[(rd + rd) % def.size()] = def[def.size() - 1];
                    def.pop_back();
                }
                if (def.size() < 1) judje.end(t);
            }
            if (t == 0) {
                break;
            }
            step++;
        }
        cout << ((step) % 2) + 1 << " Победил";
        return 0;
    }
};


#endif //TP1_GAME_H
