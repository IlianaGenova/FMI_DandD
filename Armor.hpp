#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

#include "Item.hpp"

class Armor : public Item
{
  public:
    Armor(string name, int percentage) : Item(name, percentage){};
};

#endif