#include "Board.h"
#include <iostream>

using namespace std;

int main()
{
    Board board;
    board.displayBoard();

    // int moves = 0;

    // while(true)
    // {
        
    //     cout << "Enter tiles to move: ";
    //     cin >> moves;
    //     board.movePlayer(moves);
    //     // if(board.movePlayer(moves))        
    //     // {
    //     //     position = board.getPlayerPosition();
    //     //     if(board.isPositionCandyStore(position))
    //     //     {
    //     //         cout << "Position " << position << "is a ";
    //     //     }
    //     //     CandyStore visited_store = findCandyStoreWith
    //     // }

    //     if(board.isPositionCandyStore() && ((board.getPlayerPosition() >= 3) && (board.getPlayerPosition() <= 27)))
    //     {
    //         candystore1.printCandyStore;
    //     }
    //     if(board.isPositionCandyStore() && ((board.getPlayerPosition() >= 28) && (board.getPlayerPosition() <= 53)))
    //     {
    //         candystore2.printCandyStore;
    //     }
    //     if(board.isPositionCandyStore() && ((board.getPlayerPosition() >= 54) && (board.getPlayerPosition() <= 81)))
    //     {
    //         candystore3.printCandyStore;
    //     }

    if(board.getPlayerPosition() >= 83)
    {
        cout << "You win" << endl;
    }

    // }
    
    return 0;
}