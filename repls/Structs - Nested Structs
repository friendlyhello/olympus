#include <iostream>
using namespace std;

// Second struct for nesting
struct Location
{
  float X;
  float Y;
  float Z;
};

// Struct Definition (custom datatype)
struct Player
{
  // NOTE: It is not recommended to access the member variables directly within a struct
  //       using dot notatation.
  //       It is best to use FUNCTIONS, as seen below with TakeDamage() and GetLevel() 
  string Name;

  int Level;
  int Health;
  float Damage;
  float Stamina;

  // second nested struct
  Location location = {0.f, 0.f, 0.f};

  void TakeDamage(float dmg)
  {
    Health -= dmg;
  }

  int GetLevel()
  {
    if(Level >= 10)
      {
        cout << "Player Level is greater than 10! \n";
      }

    return Level;
  }

  // second nested struct function
  void DisplayLocation()
  {
    cout << "Location X: " << location.X << endl;
    cout << "Location Y: " << location.Y << endl;
    cout << "Location Z: " << location.Z << endl;
  }
};

int main ()
{
  // define struct of type player
  Player playerOne;

  // define Player variables
  playerOne.Name = "Celes";
  playerOne.Level = 12;
  playerOne.Health = 100;
  playerOne.Damage = 35.5f;
  playerOne.Stamina = 10.5f;

  // Get Level with a function
  // BE MINDFUL OF "FLOW OF CONTROL" HERE
  cout << "Player One Level is: " << playerOne.GetLevel() << endl;

  // Call function to apply damage
  playerOne.TakeDamage(10.f);

  // Print damage taken from calling  function
  cout << "Player One takes " << 10.f << " damage!" << endl;

  // Print Health after taking damage
  cout << "Player One's HEALTH is now " << playerOne.Health << endl;

  // Print second nested struct function DisplayLocation()
  playerOne.DisplayLocation();

  // A new struct, declared on the same line, including the nested location struct in its
  // own initializer list 
  Player playerTwo = {"Locke", 12, 100, 45.5f, 7.f, {10.f, 100.f, 535.f}};

  // Print Player Two's location
  cout << "Player Two: " << playerTwo.Name << " is located at:" << endl; 
  playerTwo.DisplayLocation(); 
}