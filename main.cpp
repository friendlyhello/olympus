#include <iostream>
using namespace std;

// --> USING PRIVATE, PUBLIC, and PROTECTED Access Modifiers <--

// Parent Creature Class
class Creature {
  
  public:
    // Constructor
    Creature();

    // --> Getters and Setters PRACTICE!! FINALLY!! \(;>o<)/

    // --> 1) Getters and Setters for setting a name for an object <--

    // Setter access function
    void SetName(string name);
    // Getter access function
    string GetName();

    // --> 2) Getter access function for Health
    float GetHealth();
    
    // Take Damage functiom
    void TakeDamage(float damage);

  private:
    
    // Values
    string Name;
    float Health;

  protected:
    
    // Values
    int NumberOfLimbs;
};

// New class Goblin inheriting from parent Creature class
class Goblin : public Creature {
  
  public:
    //constructor
    Goblin();

  //getter access function
  int GetNumberOfLimbs();

  protected:
    //protected variable
    int NumberOfLimbs;
};


int main() {
  // Create object from Creature Parent class
  Creature orc;

  // --> use Getters and Setters
  // Getter
  orc.SetName("Bobo");
  // Use Setter to print name to screen
  cout << "My name is " << orc.GetName() << "!" << endl;

  // Call TakeDamage() function
  cout << "Health: " << orc.GetHealth() << endl;
  cout << orc.GetName() << " takes damage!" << endl;
  orc.TakeDamage(30.5f);

  // Create new class that inherits from parent Creature class
  Goblin imp;

  cout << "My name is " << imp.GetName() << "!" << endl;
  imp.GetNumberOfLimbs();

  cout << "I have " << imp.GetNumberOfLimbs() << " limbs!" << endl; 
}

// --> Constructors

Creature::Creature() {
  cout << "A CREATURE is born!" << endl;
  Health = 100;
}


// --> Function Definitions

// 1) Getter and Setter for Set Name
// Setter Function - is in the scope of the Creature class
void Creature::SetName(string name) {
Name = name;
}

// Getter Function - is in the scope of the Creature class
string Creature::GetName() {
  return Name;
}

// 2) Getter and Setter for GetHealth
float Creature::GetHealth() {
  return Health;
}

// 3) Take damage function
void Creature::TakeDamage(float damage) {
  float Total;
  Total = Health - damage;

  if(Total <= 0.f) {
    cout << GetName() << "has died! " << endl;
  }
  else {
    Health -= damage;
    cout << "ouch!" << endl;
  }

cout << "Health: " << GetHealth() << endl;
}

//constructor
Goblin::Goblin()
{
  NumberOfLimbs = 5;
  SetName("Dodo");
}

//getter access function
int Goblin::GetNumberOfLimbs()
{
  return NumberOfLimbs;
}


