#include "include/functions.h"

int main()
{
    // setting up
    seed();
    Board board;
    Player playerCircle('O');
    Player playerCross('X');
    board.gameState = START;
    changeColor(WHITE);
    UI Iface;
    int number;
    // --
    while(board.gameState != STOP)
    {
        if(board.gameState == START || board.gameState == WIN_CIRCLE || board.gameState == WIN_CROSS || board.gameState == DRAW)
            board.gameState = static_cast<GAMESTATE>(random(4,5)); // selecting first player - circle or cross

            //draw board here

        showCurrentPlayer(board, playerCircle, playerCross);

        cin >> number;

        Iface.isChoiceCorrect(number, board, currentPlayer(board, playerCircle, playerCross));
    }
    return 0;
}
