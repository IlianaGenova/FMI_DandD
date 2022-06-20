#ifndef __ITEM_HPP__
#define __ITEM_HPP__

#include "libraries.h"

enum ItemType
{
  WEAPON,
  ARMOR,
  SPELL
};

class Item
{
    ItemType type;
    string name;
    int percentage;

  public:
    Item(){};
    Item(ItemType type, string name, int percentage);

    void setItemType(ItemType type);
    void setPercentage(int percentage);
    void setName(string name);

    ItemType getItemType();
    int getPercentage();
    string getName();
};

#endif