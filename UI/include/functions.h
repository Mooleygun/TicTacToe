#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <windows.h>
#include <conio.h>

enum COLOR
{
    WHITE = 15,
    RED = 12
};

void changeColor(COLOR color);

void changePosition(short x, short y);

#endif
