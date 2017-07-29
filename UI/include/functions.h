#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <windows.h>
#include <conio.h>
#include <ctime>
#include "Player.h"
#include "Board.h"
#include "UI.h"

using namespace std;

enum COLOR
{
    WHITE = 15,
    RED = 12
};

void changeColor(COLOR color);

void changePosition(short x, short y);

void seed();

int random(short minNumber, short maxNumber);

void showCurrentPlayer(Board board, Player playerCircle, Player playerCross);

Player currentPlayer(Board board, Player playerCircle, Player playerCross);

#endif
