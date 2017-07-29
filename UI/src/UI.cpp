#include "UI.h"

UI::UI()
{
    //ctor
}

UI::~UI()
{
    //dtor
}

bool UI::isFieldChanged(Board board, short x, short y, Player currentPlayer)
{
    while(board.fields[x][y].isFieldEmpty() == false)
    {
        changeColor(RED);
        cout << "This field is already taken!" << endl;
        changeColor(WHITE);
        return false;
    }
    if(currentPlayer.sign == 'O')
        board.fields[x][y].fillField(CIRCLE);
    else
        board.fields[x][y].fillField(CROSS);
    return true;
}

bool UI::isChoiceCorrect(int number, Board board, Player currentPlayer)
{
    short x,y;
    switch(number)
    {
        case 1:
            x = 0;
            y = 0;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 2:
            x = 1;
            y = 0;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 3:
            x = 2;
            y = 0;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 4:
            x = 0;
            y = 1;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 5:
            x = 1;
            y = 1;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 6:
            x = 2;
            y = 1;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 7:
            x = 0;
            y = 2;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 8:
            x = 1;
            y = 2;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        case 9:
            x = 2;
            y = 2;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
        default:
            x = 0;
            y = 0;
            if(this->isFieldChanged(board,x,y,currentPlayer) == true) return true;
            break;
    }
}
