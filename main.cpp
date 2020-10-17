#include <iostream>
using namespace std;

//create class
class Animal
{
  public:

  //constructor
  Animal();
  Animal(string name, int age, int numOfLimbs);

  //values
  string Name;
  int Age;
  int NumberOfLimbs;
  
  //function
  void Report();
};

// ---! create new class that inherits from Animal class !---
class Dog : public Animal
{
  public:
};


int main()
{
  


}

// CONSTRUCTORS -->

//defining first constructor outside of class
Animal::Animal()
{
  cout << "An ANIMAL is born!" << endl;

  Name = "DEFAULT";
  Age = 2;
  NumberOfLimbs = 4;
}

// //hiding this for now to practice with "initializer list"

// //defining second constructor with function overload outside of class
// Animal::Animal(string name, int age, int numOfLimbs)
// {
//   Name = name;
//   Age = age;
//   NumberOfLimbs = numOfLimbs;
// }

//defining second constructor with function overload outside of class using an
// "initializer list"
Animal::Animal(string name, int age, int numOfLimbs): Name(name), Age(age), NumberOfLimbs(numOfLimbs)
{
  //you can still call things from inside this body, for example"
  Report();
}

// end  CONSTRUCTORS



// FUNCTIONS -->

// defining function outside of class
void Animal::Report()
{
  cout << endl;
  cout << "Name: " << Name << endl;
  cout << "Age: " << Age << endl;
  cout << "Number of Limbs: " << NumberOfLimbs << endl; 
}

// end FUNCTIONS
