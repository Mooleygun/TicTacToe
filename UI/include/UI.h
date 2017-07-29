#ifndef UI_H
#define UI_H

#include "Board.h"
#include "Player.h"
#include "functions.h"

class UI
    : public Board
{
    public:
        UI();
        virtual ~UI();
        bool isFieldChanged(Board board, short x, short y, Player currentPlayer);
        bool isChoiceCorrect(int number, Board board, Player currentPlayer);

    protected:

    private:
};

#endif // UI_H
