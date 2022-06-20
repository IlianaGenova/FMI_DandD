#include "Human.hpp"

/**
 * @brief Construct a new Human::Human object
 * Calling construcor of base class Hero
 */
Human::Human() : Hero::Hero(HUMAN_STRENGTH, HUMAN_MANA, HUMAN_HEALTH)
{
  this->getInventory().addItemToInventory(new Item(ItemType::WEAPON, "Regular sword", 20));
  this->getInventory().addItemToInventory(new Item(ItemType::SPELL, "Fireball", 20));
}

