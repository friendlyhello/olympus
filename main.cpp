#include <iostream> 
using namespace std;

// The Cat Struct

struct Cat
{

// constructor (structs can have constructors too)
  Cat();

// member variables
  string Name;
  int Health;

  void Meow();

};

// fully qualify the cat constructor name with the scope resolution operator
Cat::Cat()
{

  Name = "Cid";
  Health = 100;

  Meow();
}

// fully qualify the Cat class Meow function (INCLUDE RETURN TYPE)
void Cat::Meow()
{
  cout << "A new cat has appeared!" << endl;
  
  cout << "mew mew" << endl;
  cout << "My name is: " << Name << endl;
  cout << "My Health is: " << Health << endl;
}

int main()
{

  // create a struct with a new variable name
  Cat Shadow;

  // Accessing the struct member variables:

  // access cat struct variable Name:
  Shadow.Name = "Mog";
  // access cat struct variable Health:
  Shadow.Health += 500;

  // call struct function
  Shadow.Meow();



}

