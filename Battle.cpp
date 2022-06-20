#include "Battle.hpp"

Battle::Battle(Hero* hero, Dragon* dragon)
{
  this->hero = hero;
  this->dragon = dragon;
}

int Battle::StartBattle()
{
  int initialHeroHealth = this->hero->getHealth();
  int damage = 0, damageToReceive = 0;
  Hero* atTurn = DecideBattleStarter();

  while(this->dragon->getHealth() > 0 && this->hero->getHealth() > 0)
  {
    damage = returnDamage(atTurn, (DecideAttackType() == AttackType::MAGIC) ? AttackType::MAGIC : AttackType::MELEE);
    damageToReceive = receiveDamage(((atTurn == this->dragon) ? atTurn = this->hero : atTurn = this->dragon), damage);
    ((atTurn == this->dragon) ? atTurn = this->hero : atTurn = this->dragon)->receiveDamage(damageToReceive);
    (atTurn == this->dragon) ? atTurn = this->hero : atTurn = this->dragon;
  }

  if(this->dragon->getHealth() <= 0)
  {
    int currentHeroHealth = this->hero->getHealth();
    cout << "Hero won!" << endl;
    this->hero->setHealth(currentHeroHealth + (initialHeroHealth - currentHeroHealth)*0.5);
    return AtTurn::HERO;
  }
  else if(this->hero->getHealth() <= 0)
  {
    cout << "Dragon won, your hero is dead" << endl;
    return AtTurn::DRAGON;
  }
}

Hero* Battle::DecideBattleStarter()
{
  int range = AtTurn::DRAGON - AtTurn::HERO + 1;
  return ((rand() % range + AtTurn::HERO) == AtTurn::DRAGON ? this->dragon : this->hero);
}

int Battle::DecideAttackType()
{
  int range = AttackType::MAGIC - AttackType::MELEE + 1;
  return rand() % range + AttackType::MELEE;
}

int Battle::returnDamage(Hero* hero, AttackType attack)
{
  int baseDamage = hero->getStrength();

  if(attack == AttackType::MELEE)
  {
    if(hero->getInventory().getItemByType(ItemType::WEAPON) != NULL)
    {
      baseDamage *=  (100 + hero->getInventory().getItemByType(ItemType::WEAPON)->getPercentage());
    }
  }
  else if(attack == AttackType::MAGIC != NULL)
  {
      baseDamage *=  (100 + hero->getInventory().getItemByType(ItemType::SPELL)->getPercentage());
  }

  return baseDamage;
}

int Battle::receiveDamage(Hero* hero, int initialDamage)
{
  return initialDamage * (100 - (hero->getInventory().getItemByType(ItemType::ARMOR) != NULL ? hero->getInventory().getItemByType(ItemType::ARMOR)->getPercentage() : 0));
}