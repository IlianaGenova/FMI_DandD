#ifndef __BATTLE_HPP__
#define __BATTLE_HPP__

// #include "Hero.hpp"
#include "Dragon.hpp"

enum AtTurn
{
  HERO   = 0,
  DRAGON = 1
};

enum AttackType
{
  MELEE = 0,
  MAGIC = 1
};

class Battle
{
    Hero* hero;
    Dragon* dragon;

  public:
    Battle(Hero* hero, Dragon* dragon);

    int StartBattle();
    Hero* DecideBattleStarter();

    int Battle::DecideAttackType();
    int Battle::returnDamage(Hero* hero, AttackType attack);
    int Battle::receiveDamage(Hero* hero, int initialDamage);
};

#endif