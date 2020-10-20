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


int main()
{
  
 Dog dog("Shadow", 5, 5); 

 dog.Speak();

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

// //hiding this first constructor for now to practice with "initializer list"

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
  //you can still call things from inside this body, for example:
  Report();
}

//new constructor for Dog child class
Dog::Dog()
{
  cout << "A DOG is born!" << endl;
}

Dog::Dog(string name, int age, int numOfLimbs)
{
  Animal(name, age, numOfLimbs);
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

// end FUNCTIONS
