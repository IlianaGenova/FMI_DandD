#ifndef __DRAGON_HPP__
#define __DRAGON_HPP__

#include "Hero.hpp"

#define DRAGON_STRENGTH 25
#define DRAGON_MANA     25
#define DRAGON_HEALTH   50

class Dragon : public Hero
{
  Dragon();

  void levelUp();
};

#endif