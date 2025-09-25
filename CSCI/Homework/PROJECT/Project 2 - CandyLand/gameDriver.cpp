#include <iostream>
#include <ctime>
#include <cassert>
#include "CandyLand.h"
#include "Board.h"
#include "Player.h"
using namespace std;



int main() // reduce amount of lines in main
{
    // Goal is to only have minimal lines in main
    srand(time(0));


    Board board;
    board.displayBoard();

    CandyLand game;
    game.startGame();


    // assert()
  return 0;
}