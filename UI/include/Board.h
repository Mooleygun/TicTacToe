#ifndef BOARD_H
#define BOARD_H

#include "Field.h"
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
        void updateBoard(GAMESTATE state, short number);
        char GStoChar(GAMESTATE gs);

    protected:

    private:
};

#endif // BOARD_H
