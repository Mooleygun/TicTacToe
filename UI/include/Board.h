#ifndef BOARD_H
#define BOARD_H

#include "Field.h"
#include "Player.h"
#include "functions.h"

enum GAMESTATE
{
    STOP = 0,
    WIN_CIRCLE = 1,
    WIN_CROSS = 2,
    DRAW = 3,
    PLAY_CIRCLE = 4,
    PLAY_CROSS = 5,
    START = 6
};

class Board
    : public Field
{
    public:
        Board();
        virtual ~Board();
        Field fields[3][3];
        GAMESTATE gameState;
        GAMESTATE checkGamestate();
        void drawBoard();
        void updateBoard(short number);
        char GStoChar(GAMESTATE gs);
        bool isFieldChanged(short x, short y, Player currentPlayer);
        bool isChoiceCorrect(int number, Player currentPlayer);

    protected:

    private:
};

void showCurrentPlayer(Board board, Player playerCircle, Player playerCross);

Player currentPlayer(Board board, Player playerCircle, Player playerCross);

#endif // BOARD_H
