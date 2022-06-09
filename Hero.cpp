#include "Hero.hpp";

Hero::Hero(int strength, int mana, int health)
{
  setStrength(strength);
  setMana(mana);
  setHealth(health);
}

/**
 * @brief Getter functions of class Hero
 */

int Hero::getStrength()
{
  return this->strength;
}

int Hero::getMana()
{
  return this->mana;
}

int Hero::getHealth()
{
  return this->health;
}


/**
 * @brief Setter functions of class Hero
 */

void Hero::setStrength(int strength)
{
  this->strength = strength;
}

void Hero::setMana(int mana)
{
  this->mana =mana;
}

void Hero::setHealth(int health)
{
  this->health = health;
}