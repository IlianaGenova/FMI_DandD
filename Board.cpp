#include "Board.hpp"

Board::Board(int width, int height, int treasures, int monsters)
{
  this->BoardWidth = width;
  this->BoardHeight = height;
  this->TreasureCount = treasures;
  this->MonsterCount = monsters;
}