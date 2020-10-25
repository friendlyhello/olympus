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
  void GetName();

  private:
  // Values
  string Name;
  float Health;

};


int main()
{

  Creature goblin;

}

// --> Constructors

Creature::Creature()
{
  cout << "A CREATURE has been born!" << endl;
}

// --> Functions
void Creature::SetName(string name)
{
Name = name;
}