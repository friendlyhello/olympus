#include <iostream>
using namespace std;

// Declare enum with 4 states
enum PlayerStatus 
  {
    PS_Crouching,
    PS_Walking,
    PS_Sprinting,
    PS_Idle
  };

int main() 
{
  
  cout << " --- Enums Practice 1 ---" << endl;

  // Declaring the enum to variable status
  PlayerStatus status;

  // Assigning PS_Crouching to variable status
  status = PS_Crouching;

  // intentionally setting the condition to PS_Sprinting instead of PS_Crouching
  if (status == PS_Sprinting) 
  {
    cout << "The Player Status is crouching!" << endl;
  } 
    
  else 
  {
    cout << 
      "The Player Status is set to something else! Please check the condition." 
    << endl;
  }

}