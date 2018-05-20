#include "Player.h"
#include "Game.h"

int main()
{
    int balance;
    cout << "Enter the starting treasury >> "; // предполагается, что игроки договариваются и вводят первоначальную сумму
    cin >> balance;
    Player* Player_1 = new Player(balance);
    Player_1->Initialize();
    Player* Player_2 = new Player(balance);
    Player_2->Initialize();
    Game* game = new Game(Player_1, Player_2);
    game->game();
    return 0;
}