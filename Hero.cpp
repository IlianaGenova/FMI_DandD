#include "Hero.hpp";

Hero::Hero(int strength, int mana, int health)
{
  setStrength(strength);
  setMana(mana);
  setHealth(health);

  this->level = 1;
  this->inventory = Inventory();
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

int Hero::getLevel()
{
  return this->level;
}

Inventory& Hero::getInventory()
{
  return this->inventory;
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

void Hero::setLevel(int level)
{
  this->level = level;
}

void Hero::receiveDamage(int damage)
{
  this->health -= damage;
}