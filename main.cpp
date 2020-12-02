#include <iostream>
using namespace std;

// CASTING! 

// Derivation chain:
// Parent
class Object
{
public:
  virtual void BeginPlay();

  // Add a function to test casting:
  void ObjectFunction()
  {
    cout << "ObjectFunction() called!\n\n";
  }
};

// Child
class Actor : public Object
{
public:
  virtual void BeginPlay() override;

  // Add a function to test casting:
  void ActorFunction()
  {
    cout << "ActionFunction() called!\n\n";
  }
};

// Grandchild
class Pawn : public Object
{
public:
  virtual void BeginPlay() override;

  // Add a function to test casting:
  void PawnFunction()
  {
    cout << "PawnFunction() called!\n\n";
  }
};

int main()
{

Object* Ptr_To_Object = new Object;

  Actor* Ptr_To_Actor = new Actor;
  
  Pawn* Ptr_To_Pawn = new Pawn;
  
  Object* ObjectArrray[] = {Ptr_To_Object, Ptr_To_Actor, Ptr_To_Pawn};

  // Loop through the array to see the magic of Polymorphism!

  // Notice how each pointer prints its own function override, all because of the inheritance chain

  for (int i = 0; i < 3; i++)
  {
    //ObjectArrray[i]->BeginPlay(); (hide this for now)

    // !-- CASTING EXAMPLE STARTS HERE!!! --!
    // 1. Create temporary new object
    Object* obj = ObjectArrray[i];

    // 2. Cast to Actor using dynamic_cast function
    Actor* act = dynamic_cast<Actor*>(obj);
    // <type that is being converted to>(what is being converted)

    // 3. Perform a check to see whether cast was succesful
    if (act)
    {
      act->ActorFunction();
    }

    // Now try casting to Pawn!
    Pawn* pwn = dynamic_cast<Pawn*>(obj);

    // Check to see if it successful!
    if (pwn)
    {
      pwn->PawnFunction();
    }

  }

  delete Ptr_To_Object;
  delete Ptr_To_Actor;
  delete Ptr_To_Pawn;
}

// Function definitions - Remember to "fully qualify"
void Object::BeginPlay()
{
  cout << "Object begin play!\n";
}

void Actor::BeginPlay()
{
  cout << "Actor begin play!\n";
}

void Pawn::BeginPlay()
{
  cout << "Pawn begin play!\n";
}