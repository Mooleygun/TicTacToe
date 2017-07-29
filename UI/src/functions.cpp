#include "functions.h"

void changeColor(COLOR color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void changePosition(short x, short y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position;
    position.X = x;
    position.Y = y;
    SetConsoleCursorPosition(hConsole, position);
}

void seed()
{
    srand (static_cast<int>(time(NULL)));
}

int random(short minNumber, short maxNumber)
{
    return (rand() % (maxNumber - minNumber + 1)) + minNumber;
}

void showCurrentPlayer(Board board, Player playerCircle, Player playerCross)
{
    changePosition(16,1);

    changeColor(RED);

    if(board.gameState == PLAY_CIRCLE) cout << playerCircle.sign;
    else if(board.gameState == PLAY_CROSS) cout << playerCross.sign;
    else cout << '-';

    changeColor(WHITE);

    changePosition(22,2);
    cout << "Points:";

    changePosition(22,3);
    cout << playerCircle.sign << " : " << playerCircle.points;

    changePosition(22,4);
    cout << playerCross.sign << " : " << playerCross.points;

    changePosition(0,8);
}

Player currentPlayer(Board board, Player playerCircle, Player playerCross)
{
    Player emptyControlPlayer('=');
    if(board.gameState == PLAY_CIRCLE) return playerCircle;
    if(board.gameState == PLAY_CROSS) return playerCross;
    return emptyControlPlayer;
}
