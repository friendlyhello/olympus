#include <iostream>
#include <string>
using namespace std;

// Using enums and swtich statements together

enum PlayerStatus
{
  PS_Running,
  PS_Walking,
  PS_Crouching,
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

// function prototype

void UpdateMovementSpeed();

int main()
{

  float MovementSpeed;

  PlayerStatus status = PS_Walking;

}

// function definition

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
  if (P_Status == PS_Running) 
  {
    speed = RunSpeed;
  }

  else if(P_Status == PS_Walking)
  {
    speed = WalkSpeed;
  }

  else if(P_Status == PS_Crouching)
  {
    speed = CrouchSpeed;
  }
}