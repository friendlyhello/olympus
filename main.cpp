#include <iostream>
using namespace std;

int main()
{

  cout << " --- Pointers Practice! --- " << endl;

  // declare a variable with some value
  int heal = 50;

  // create a pointer of type int
  int* healPointer;

  // initialize the pointer with an address
  healPointer = &heal;

  // print out the address and the variable stored in that address

  // address of healPointer
  cout << "The address healPointer points to is: " << healPointer << endl;

  // variable stored in the address of healPointer
  cout << "The pointer healPointer now points to the address that stores the variable heal: " << *healPointer << endl;

  // Assign another variable to the address of healPointer

  // create another variable with some value
  int life = 100;

  // assign life to healPointer
  healPointer = &life;

  // print out life variable from the address of healPointer
  cout << "The pointer healPointer now points to the address that stores the variable life: "  << *healPointer << endl;
}