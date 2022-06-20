#include "Game.hpp"

void Game::newGame()
{
  this->board = new Board(10, 10, 2, 2);
}

void Game::levelUp()
{
  Board* newBoard = new Board(this->board->BoardWidth + previousLevelBoardValues[0], 
                              this->board->BoardHeight + previousLevelBoardValues[1],
                              this->board->MonsterCount + previousLevelBoardValues[2],
                              this->board->TreasureCount + previousLevelBoardValues[3]);

  previousLevelBoardValues[0] = newBoard->BoardWidth;
  previousLevelBoardValues[1] = newBoard->BoardHeight;
  previousLevelBoardValues[2] = newBoard->MonsterCount;
  previousLevelBoardValues[3] = newBoard->TreasureCount;

  delete this->board;
  this->board = newBoard;
}