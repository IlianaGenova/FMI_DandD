#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

#include "Item.hpp"

class Armor : protected Item
{
  Armor(int percentage) : Item(percentage){};
};

#endif