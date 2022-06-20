#include "Board.hpp"

Board::Board(int width, int height, int treasures, int monsters)
{
  this->BoardWidth = width;
  this->BoardHeight = height;
  this->TreasureCount = treasures;
  this->MonsterCount = monsters;

  *this->board = new char[this->BoardWidth];
  for(int i = 0; i < this->BoardWidth; i++)
  {
    this->board[i] = new char[this->BoardHeight];
  }
}

Board::~Board()
{
  for(int i = 0; i < this->BoardWidth; i++)
  {
    delete this->board[i];
  }

  delete this->board;
}