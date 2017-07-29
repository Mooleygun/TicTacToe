#include <iostream>
#include "include/functions.h"
#include "include/Board.h"
#include "include/UI.h"

using namespace std;

int main()
{
    // setting up
    seed();
    Board board;
    Player playerCircle('O');
    Player playerCross('X');
    board.gameState = START;
    changeColor(WHITE);
    int number;
    // --
    while(board.gameState != STOP)
    {
        if(board.gameState == START || board.gameState == WIN_CIRCLE || board.gameState == WIN_CROSS || board.gameState == DRAW)
            {
                board.gameState = static_cast<GAMESTATE>(random(4,5)); // selecting first player - circle or cross
                board.drawBoard();
            }

            //draw board here

        showCurrentPlayer(board, playerCircle, playerCross);
        bool isChoiceCorrect = false;
        while(isChoiceCorrect == false)
        {
            cin >> number;

            isChoiceCorrect = board.isChoiceCorrect(number, currentPlayer(board, playerCircle, playerCross));
        }
        board.updateBoard(number);
        if(board.gameState == PLAY_CIRCLE)
        {
            board.gameState = PLAY_CROSS;
        }
        else if(board.gameState == PLAY_CROSS)
        {
            board.gameState = PLAY_CIRCLE;
        }
        // just for debugging
        changePosition(0,14);
        for(int i = 0 ; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << static_cast<int>(board.fields[j][i].state) << " ";
            }
            cout << endl;
        }

    }
    return 0;
}
