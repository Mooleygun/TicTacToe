#include <iostream>
#include "include/functions.h"

using namespace std;

int main()
{
    changeColor(WHITE);
    cout << "+---+---+---+" << endl;
    cout << "| 1 | 2 | 3 |" << endl;
    cout << "+---+---+---+" << endl;
    cout << "| 4 | 5 | 6 |" << endl;
    cout << "+---+---+---+" << endl;
    cout << "| 7 | 8 | 9 |" << endl;
    cout << "+---+---+---+" << endl;
    changePosition(20,1);
    changeColor(RED);
    //view current player
    return 0;
}
