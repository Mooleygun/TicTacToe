#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <windows.h>
#include <conio.h>
#include <ctime>

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

#endif
