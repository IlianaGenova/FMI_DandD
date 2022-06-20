#include "Dragon.hpp"

/**
 * @brief Construct a new Dragon object
 * Calling construcor of base class Hero
 */
Dragon::Dragon() : Hero::Hero(DRAGON_STRENGTH, DRAGON_MANA, DRAGON_HEALTH)
{
  this->getInventory().addItemToInventory(new Item(ItemType::ARMOR, "Scales", 15));
}

void Dragon::levelUp()
{
  this->setLevel(this->getLevel()+1);
  this->setHealth(this->getMana()+10);
  this->setHealth(this->getHealth()+10);
  this->setHealth(this->getStrength()+10);

  Item* armor = this->getInventory().getItemByType(ItemType::ARMOR);
  if(armor != NULL)
  {
    int currentPercentage = armor->getPercentage();
    armor->setPercentage(currentPercentage + 5);
  }
}

