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

// Create child class from parent class Animal
class Dog : public Animal
{
  public:

  //constructor for Dog child class of Animal parent class
  Dog();
  Dog(string name, int age, int numOfLimbs);

  void Speak();

};

class Corgi : public Dog
{
  public:
    //constructor
    Corgi();
    
    //function
    void Fetch();

};

int main()
{
  
 Corgi brown;

 brown.Speak();

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


//  --> Defining second constructor with function overload outside of class using 
//      an "initializer list"
Animal::Animal(string name, int age, int numOfLimbs): Name(name), Age(age), NumberOfLimbs(numOfLimbs)
{
  //you can still call things from inside this body, for example:
  Report();
}

//new constructor for Dog child class ("fully qualify" with ::)
Dog::Dog()
{
  cout << "A DOG is born!" << endl;
}

//  --> Defining second constructor with function overload outside of class using 
//      an "initializer list"
Dog::Dog(string name, int age, int numOfLimbs) : Animal(name, age, numOfLimbs)
{
  
}

Corgi::Corgi()
{
  cout << "I'm a corgi!" << endl;
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
  cout << endl;
}

void Dog::Speak()
{
  cout << "Wau wau!" << endl;
}

void Corgi::Fetch()
{
  cout << "I got it!" << endl;
}
// end FUNCTIONS
