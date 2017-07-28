#ifndef BOARD_H
#define BOARD_H
#include "Field.h"

enum GAMESTATE
{
    PLAY = 0,
    WIN_CIRCLE = 1,
    WIN_CROSS = 2,
    DRAW = 3,
    OTHER =4// ???????
};

class Board
    : public Field
{
    public:
        Board();
        virtual ~Board();
        Field fields[3][3];
        bool isFieldEmpty();
        void fillField(STATE state);
        GAMESTATE checkGamestate();

    protected:

    private:
};

#endif // BOARD_H
