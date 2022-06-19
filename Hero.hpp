#ifndef __HERO_HPP__
#define __HERO_HPP__

#include "Inventory.hpp"

#include "libraries.h"

/**
 * @brief  Class Hero
 * Should be an abstract, non-instantiable class - protected constructors make it such.
 * Hero has attributes for strenght, mana and health
 */

class Hero
{
  int level;
  int strength;
  int mana;
  int health;
  Inventory inventory;

  protected:
    Hero(){};
    Hero(int strength, int mana, int health);

    int getStrength();
    int getMana();
    int getHealth();
    int getLevel();

    void setStrength(int strength);
    void setMana(int mana);
    void setHealth(int health);
    void setLevel(int level);

    void levelUp();
};

#endif