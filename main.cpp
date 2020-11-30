#include <iostream>
using namespace std;

//class
class Object
{
public:
void BeginPlay();
};

int main ()
{

//create new object dynamically (w/pointer)
Object* obj = new Object;
obj->BeginPlay();
}

//function declaration
void Object::BeginPlay()
{
  cout << "Start game!\n";
}