#ifndef __SPELL_HPP__
#define __SPELL_HPP__

#include "Item.hpp"

class Spell : public Item
{
  public:
    Spell(string name, int percentage) : Item(name, percentage){};
};

#endif