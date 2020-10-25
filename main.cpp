#include <iostream>
using namespace std;

// Classes

class Creature
{
  public:
  // Constructor
  Creature();

  // --> Getters and Setters PRACTICE!! FINALLY!! \(;>o<)/

  // Setter function
  void SetName(string name);

  // Getter function
  string GetName();

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