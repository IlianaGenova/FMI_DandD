#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#define FREE_SYMBOL     .
#define WALL_SYMBOL     #
#define TREASURE_SYMBOL T
#define MONSTER_SYMBOL  M

class Board
{
  char** board;

  public:
    Board(int width, int height, int treasures, int monsters);

    int BoardWidth;
    int BoardHeight;
    int TreasureCount;
    int MonsterCount;

    ~Board();

};

#endif