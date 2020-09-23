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

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

int main()
{

  float MovementSpeed;

  PlayerStatus status = PS_Walking;

  UpdateMovementSpeed(status, MovementSpeed);

  cout << "MovementSpeed = " << MovementSpeed << endl;

}

// function definition

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{

  switch (P_Status)
  {
    case PS_Running:
    speed = RunSpeed;
    break;

    case PS_Walking:
    speed = WalkSpeed;
    break;

    case PS_Crouching:
    speed = CrouchSpeed;
  }

}