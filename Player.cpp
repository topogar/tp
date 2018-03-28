#include "Player.h"

Player::Player(int balance) : fraction_ID(0), Player_Army(nullptr), balance(balance) {}

int Player::ShowFraction() {
    return fraction_ID;
}

void Player::SetFraction() {
    cout << "Choose your fraction:\n1. Humans\n2. Undead\n";
    cin >> fraction_ID;
    if (fraction_ID == 1) factory = new HumanArmyFactory();
    if (fraction_ID == 2) factory = new HumanArmyFactory(); //фабрика UndeadArmyFactory будет здесь в будущем, т.к. пока не реализована
}

void Player::Initialize() {
    SetFraction();
    Menu PlMenu; // рассматривается вопрос о переносе в поля класса Player
    Player_Army = PlMenu.CreateArmy(balance, factory);
    Player_Army->info();
}