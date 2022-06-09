#include "Item.hpp"

Item::Item(string name, int percentage)
{
  setPercentage(percentage);
  setName(name);
}

void Item::setPercentage(int percentage)
{
  this->percentage = percentage;
}

void Item::setName(string name)
{
  this->name = name;
}

int Item::getPercentage()
{
  return this->percentage;
}

string Item::getName()
{
  return this->name;
}