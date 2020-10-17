#include <iostream>
using namespace std;


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

int main()
{
  //declare the class
  Animal animal;

  //call the function
  animal.Report();

  //create second animal object
  Animal animal_2("Koala Bear", 5, 4);

  //call report function to print to screen of second animal object
  animal_2.Report();

}

//defining first constructor outside of class
Animal::Animal()
{
  cout << "An ANIMAL is born!" << endl;

  Name = "DEFAULT";
  Age = 2;
  NumberOfLimbs = 4;
}

//defining second constructor with function overload outside of class
Animal::Animal(string name, int age, int numOfLimbs)
{
  Name = name;
  Age = age;
  NumberOfLimbs = numOfLimbs;
}

// defining function outside of class
void Animal::Report()
{
  cout << "Name: " << Name << endl;
  cout << "Age: " << Age << endl;
  cout << "Number of Limbs: " << NumberOfLimbs << endl; 
}
