#include "Inventory.hpp"

/**
 * @brief Gets item of a specific subtype from inventory 
 * 
 * @param type 
 * @return Item* - if found, else - NULL
 */
Item* Inventory::getItemByType(ItemType type)
{
  for(int i = 0; i < this->items.size(); i++)
  {
    if(this->items[i]->getItemType() == type)
    {
      return this->items[i];
    }
  }

  return NULL;
}

/**
 * @brief Returns the items in the inventory
 * 
 * @return vector<Item> 
 */
vector<Item*> Inventory::checkInventory()
{
  return this->items;
}

/**
 * @brief Adds item to the inventory
 * 
 * @param item 
 */
void Inventory::addItemToInventory(Item* item)
{
  int itemSize = this->items.size();

  if(itemSize <= MAX_ITEMS)
  {
    for(int i = 0; i < itemSize; i++)
    {
      if(this->items[i]->getItemType() == item->getItemType())
      {
        cout << "Overwriting " + this->items[i]->getName() + " with " + item->getName() << endl;
        this->items[i] = item;
        return;
      }
    }

    this->items.push_back(item);
  }

  cout << "Something went wrong. Inventory overflowing" << endl;
}