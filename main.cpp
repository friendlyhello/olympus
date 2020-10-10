#include <iostream>
using namespace std;

class Dog
{
  
  public:

  // Constructor (a function that gets called when an object is made)
  Dog()
  {
    cout << "WAU WAU" << endl;
  }

  // Member variables
  string Name;
  int Health;
  float Age;


  // void Bark()
  // {
  //   cout << "Waff waff" << endl;
  // }
};

int main ()
{

  // Objects made from the class Dog
  Dog Mog;
  Dog Bobo;

}