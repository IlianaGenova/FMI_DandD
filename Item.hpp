#ifndef __ITEM_HPP__
#define __ITEM_HPP__

#include "libraries.h"

class Item
{
  string name;
  int percentage;

  protected:

  Item(){};
  Item(string name, int percentage);

  void setPercentage(int percentage);
  void setName(string name);

  int getPercentage();
  string getName();
};

#endif