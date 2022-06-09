#include "Item.hpp"

Item::Item(int percentage)
{
  setPercentage(percentage);
}

void Item::setPercentage(int percentage)
{
  this->percentage = percentage;
}

int Item::getPercentage()
{
  return this->percentage;
}