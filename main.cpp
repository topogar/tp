#include "Player.h"

int main()
{
    int balance;
    cout << "Enter the starting treasury >> "; // предполагается, что игроки договариваются и вводят первоначальную сумму
    cin >> balance;
    Player Player_1(balance);
    Player_1.Initialize();
    Player Player_2(balance);
    Player_2.Initialize();

    return 0;
}