#ifndef __HERO_HPP__
#define __HERO_HPP__

#include "Item.hpp"
#include "Weapon.hpp"
#include "Armor.hpp"
#include "Spell.hpp"

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
  vector<Item> inventory;

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
    vector<Item> checkInventory();
    void addItemToInventory(Item item);
};

#endif