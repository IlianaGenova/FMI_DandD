#include "Warrior.hpp"

/**
 * @brief Construct a new Warrior::Warrior object
 * Calling construcor of base class Warrior
 */
Warrior::Warrior() : Hero::Hero(WARRIOR_STRENGTH, WARRIOR_MANA, WARRIOR_HEALTH)
{
  this->getInventory().addItemToInventory(new Item(ItemType::WEAPON, "Regular sword", 20));
  this->getInventory().addItemToInventory(new Item(ItemType::SPELL, "Fireball", 20));
}