#ifndef __INVENTORY_HPP__
#define __INVENTORY_HPP__

#include "Item.hpp"

#define MAX_ITEMS 3

class Inventory
{
  private:
  vector<Item*> items;

  public:
    Inventory();

    Item* getItemByType(ItemType type);
    
    vector<Item*> checkInventory();
    void addItemToInventory(Item* item);
};

#endif