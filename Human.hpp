#ifndef __HUMAN_HPP_
#define __HUMAN_HPP_

#define HUMAN_STRENGTH 30
#define HUMAN_MANA     20
#define HUMAN_HEALTH   50

#include "Hero.hpp"

class Human : protected Hero
{
  Human();
};

#endif