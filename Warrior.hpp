#ifndef __WARRIOR_HPP__
#define __WARRIOR_HPP__

#define WARRIOR_STRENGTH 10
#define WARRIOR_MANA     40
#define WARRIOR_HEALTH   50

#include "Hero.hpp"

class Warrior : protected Hero
{
  Warrior();
};

#endif