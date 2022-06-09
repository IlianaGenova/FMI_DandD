#ifndef __HERO_HPP__
#define __HERO_HPP__

/**
 * @brief  Class Hero
 * Should be an abstract, non-instantiable class - protected constructors make it such.
 * Hero has attributes for strenght, mana and health
 */

class Hero
{
  int strength;
  int mana;
  int health;

  protected:
    Hero(){};
    Hero(int strength, int mana, int health);;

    int getStrength();
    int getMana();
    int getHealth();

    void setStrength(int strength);
    void setMana(int mana);
    void setHealth(int health);
};

#endif