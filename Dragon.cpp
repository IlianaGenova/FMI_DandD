#include "Dragon.hpp"

/**
 * @brief Construct a new Dragon object
 * Calling construcor of base class Hero
 */
Dragon::Dragon() : Hero::Hero(DRAGON_STRENGTH, DRAGON_MANA, DRAGON_HEALTH)
{
  this->getInventory().addItemToInventory(new Item(ItemType::ARMOR, "Scales", 15));
}

