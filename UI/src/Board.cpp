#include "Board.h"

Board::Board()
{

}

Board::~Board()
{
    //dtor
}

GAMESTATE Board::checkGamestate()
{
    return this->gameState;
}

void Board::drawBoard()
{
        system("cls");

        cout << "+---+---+---+" << endl;
        cout << "| 1 | 2 | 3 |" << endl;
        cout << "+---+---+---+" << endl;
        cout << "| 4 | 5 | 6 |" << endl;
        cout << "+---+---+---+" << endl;
        cout << "| 7 | 8 | 9 |" << endl;
        cout << "+---+---+---+" << endl;
}

char Board::GStoChar(GAMESTATE gs)
{
    if(gs == PLAY_CIRCLE) return 'O';
    if(gs == PLAY_CROSS) return 'X';
}

void Board::updateBoard(GAMESTATE state, short number)
{
    short x,y;
    switch(number)
    {
        case 1:
            x = 2;
            y = 1;
            break;
        case 2:
            x = 6;
            y = 1;
            break;
        case 3:
            x = 10;
            y = 1;
            break;
        case 4:
            x = 2;
            y = 3;
            break;
        case 5:
            x = 6;
            y = 3;
            break;
        case 6:
            x = 10;
            y = 3;
            break;
        case 7:
            x = 2;
            y = 5;
            break;
        case 8:
            x = 6;
            y = 5;
            break;
        case 9:
            x = 10;
            y = 5;
            break;
}
            changePosition(x,y);
            cout << GStoChar(state);
}
