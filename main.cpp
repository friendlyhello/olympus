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

}

//defining constructor outside of class
Animal::Animal()
{
  cout << "An ANIMAL is born!" << endl;
}

// defining function outside of class
void Animal::Report()
{
  cout << "Name: " << Name << endl;
}
