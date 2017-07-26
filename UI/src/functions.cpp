#include "functions.h"

bool changeColor(COLOR color)
{
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(hConsole, color);
}
