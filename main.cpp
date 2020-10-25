#include <iostream>
using namespace std;

// Classes

class Creature
{
  public:
  // Constructor
  Creature();

  // --> Getters and Setters PRACTICE!! FINALLY!! \(;>o<)/

  // --> 1) Getters and Setters for setting a name for an object
  // Setter function
  void SetName(string name);
  // Getter function
  string GetName();

  // --> 2) Getters and Setters for Health function
  
  
  
  // Take Damage functiom
  void TakeDamage(float damage);

  private:
  // Values
  string Name;
  float Health;

};


int main()
{
  // Create class object
  Creature goblin;

  // --> use Getters and Setters

  // Getter
  goblin.SetName("Gobby");

  // Use Setter to print name to screen
  cout << "My name is " << goblin.GetName() << "!" << endl;

}

// --> Constructors

Creature::Creature()
{
  cout << "A CREATURE is born!" << endl;
}

// --> Function Definitions

// 1) Getter and Setter for Set Name
// Setter Function - is in the scope of the Creature class
void Creature::SetName(string name)
{
Name = name;
}
// Getter Function - is in the scope of the Creature class
string Creature::GetName()
{
  return Name;
}

// 2) Getter and Setter for take damage
void Creature::TakeDamage(float damage)
{
  float Total;
  Total = Health - damage;

  if(Total <= 0.f)
  {
    cout << GetName() << "has died! " << endl;
  }
  else 
  {
    Health += damage;
  }

cout << "Health: " << GetHealth() << endl;

}


