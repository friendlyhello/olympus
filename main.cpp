#include <iostream>
using namespace std;

// Constructors are the functions that get called when an object is created!

class Dog
{
  public:
  
  // Dog() is the constructor, the function that gets called when a Dog object is made

  // You can call a function from within a constructor
  Dog()
  {
    Bark();

    // You can also define member variables within the constructor
    Name = "Shadow";
    Age = 12.f;
    Health = 100;
  }
  
  string Name;
  float Age;
  int Health;

  void Bark()
  {
    cout << "woof woof" << endl;
  }
};

int main()
{
  Dog Mog;

  cout << "Dog object created: " << Mog.Name << endl;
  cout << "Dog object age: " << Mog.Age << endl;
  cout << "Dog object health: " << Mog.Health << endl;

  // You can also define new values for existing member variables

  Mog.Name = "Cid";
  Mog.Age = 1.5f;
  Mog.Health = 50;

  cout << "Dog object created with new value: " << Mog.Name << endl;
  cout << "Dog object age with new value: " << Mog.Age << endl;
  cout << "Dog object health with new value: " << Mog.Health << endl;
}