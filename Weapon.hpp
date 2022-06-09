#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include "Item.hpp"

class Weapon : protected Item
{
  Weapon(int percentage) : Item(percentage){};
};

#endif