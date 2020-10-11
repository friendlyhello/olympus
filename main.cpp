#include <iostream>
using namespace std;

struct Player
{

  string Name;

  int Level;
  int Health;
  float Damage;
  float Stamina;

  void TakeDamage(float dmg)
  {
    Health -= dmg;
  }

  int GetLevel()
  {
    return Level;
  }

};

int main ()
{

}