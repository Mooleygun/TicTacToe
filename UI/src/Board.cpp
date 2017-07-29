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
    return '=';
}

void Board::updateBoard(short number)
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
            cout << GStoChar(this->gameState);
}


bool Board::isFieldChanged(short x, short y, Player currentPlayer)
{
    while(this->fields[x][y].isFieldEmpty() == false)
    {
        changeColor(RED);
        changePosition(0,9);
        cout << "This field is already taken!";
        changeColor(WHITE);

        changePosition(0,8);
        cout << " ";            //clear input space
        changePosition(0,8);

        return false;
    }
    /*if(currentPlayer.sign == 'O')
        board.fields[x][y].fillField(CIRCLE);
    else
        board.fields[x][y].fillField(CROSS); */
    if(currentPlayer.sign == 'O')
        this->fields[x][y].state = CIRCLE;
    else
        this->fields[x][y].state = CROSS;
    return true;
}

bool Board::isChoiceCorrect(int number, Player currentPlayer)
{
    short x,y;
    switch(number)
    {
        case 1:
            x = 0;
            y = 0;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 2:
            x = 1;
            y = 0;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 3:
            x = 2;
            y = 0;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 4:
            x = 0;
            y = 1;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 5:
            x = 1;
            y = 1;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 6:
            x = 2;
            y = 1;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 7:
            x = 0;
            y = 2;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 8:
            x = 1;
            y = 2;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
        case 9:
            x = 2;
            y = 2;
            if(this->isFieldChanged(x, y, currentPlayer) == true) return true;
            break;
    }
    return false;
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
