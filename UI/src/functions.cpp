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
