#include "Mage.hpp"

/**
 * @brief Construct a new Mage::Mage object
 * Calling construcor of base class Mage
 */
Mage::Mage() : Hero::Hero(MAGE_STRENGTH, MAGE_MANA, MAGE_HEALTH)
{
  this->getInventory().addItemToInventory(new Item(ItemType::WEAPON, "Regular sword", 20));
  this->getInventory().addItemToInventory(new Item(ItemType::SPELL, "Fireball", 20));
}