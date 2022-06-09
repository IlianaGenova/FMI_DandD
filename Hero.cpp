#include "Hero.hpp";

Hero::Hero(int strength, int mana, int health)
{
  setStrength(strength);
  setMana(mana);
  setHealth(health);

  this->level = 1;

  addItemToInventory(Weapon("Regular sword", 20));
  addItemToInventory(Spell("Fireball", 20));
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



/**
 * @brief Level up hero
 * Increments the level of the hero
 */
void Hero::levelUp()
{
  this->level++;
}

/**
 * @brief Returns the items in the hero's inventory
 * 
 * @return vector<Item> 
 */
vector<Item> Hero::checkInventory()
{
  return this->inventory;
}

/**
 * @brief Adds item to the hero's inventory
 * 
 * @param item 
 */
void Hero::addItemToInventory(Item item)
{
  this->inventory.push_back(item);
}