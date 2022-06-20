#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "Battle.hpp"
#include "Board.hpp"

// initial values
int previousLevelBoardValues[4] = [5, 0, 1, 0];

class Game
{
    int level;
    Board* board;

  public:
    void newGame();
    void levelUp();
    void createNewBoard()

};

#endif