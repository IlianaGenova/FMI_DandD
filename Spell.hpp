#ifndef __SPELL_HPP__
#define __SPELL_HPP__

#include "Item.hpp"

class Spell : protected Item
{
  Spell(int percentage) : Item(percentage){};
};

#endif