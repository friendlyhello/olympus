#include <iostream>
using namespace std;

//Parent Class
class Object
{
  public:
  virtual void BeginPlay();
};

//Child Class
class Actor : public Object
{
  public:
  virtual void BeginPlay() override;
};

//Another Child class
class Pawn : public Object
{
  public:
  virtual void BeginPlay() override;
};

int main()
{
  //create new dynamic object (using a pointer)
  Object* obj = new Object;
  //call function
  obj->BeginPlay();

  Actor* act = new Actor;
  act->BeginPlay();

  Pawn* pwn = new Pawn;
  pwn->BeginPlay();

  delete obj;
  delete act;
  delete pwn;
}

//function definition  - remember to "fully qualify"
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
