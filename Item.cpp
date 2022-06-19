#include "Item.hpp"

Item::Item(ItemType type, string name, int percentage)
{
  setItemType(type);
  setPercentage(percentage);
  setName(name);
}

void Item::setItemType(ItemType type)
{
  this->type = type;
}

void Item::setPercentage(int percentage)
{
  this->percentage = percentage;
}

void Item::setName(string name)
{
  this->name = name;
}

ItemType Item::getItemType()
{
  return this->type;
}

int Item::getPercentage()
{
  return this->percentage;
}

string Item::getName()
{
  return this->name;
}