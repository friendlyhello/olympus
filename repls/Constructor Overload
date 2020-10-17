#include <iostream>
using namespace std;


class Animal
{
  public:

  //constructor
  Animal();

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

}

//defining constructor outside of class
Animal::Animal()
{
  cout << "An ANIMAL is born!" << endl;

  Name = "DEFAULT";
  Age = 2;
  NumberOfLimbs = 4;
}

// defining function outside of class
void Animal::Report()
{
  cout << "Name: " << Name << endl;
  cout << "Age: " << Age << endl;
  cout << "Number of Limbs: " << NumberOfLimbs << endl; 
}
