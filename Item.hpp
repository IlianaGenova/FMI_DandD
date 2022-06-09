#ifndef __ITEM_HPP__
#define __ITEM_HPP__

class Item
{
  int percentage;

  protected:

  Item(){};
  Item(int percentage);

  void setPercentage(int percentage);
  int getPercentage();
};

#endif