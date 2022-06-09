#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include "Item.hpp"

class Weapon : public Item
{
  public:
    Weapon(string name, int percentage) : Item(name, percentage){};
};

#endif