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
  // placing the * before the pointer variable name is called "dereferencing"
  cout << "The pointer healPointer now points to the address that stores the variable heal: " << *healPointer << endl;

  // Assign another variable to the address of healPointer

  // dereferencing healPointer to hold a new value - notice * is now on the left side 
  // of healPointer
  *healPointer = 100;

  // print out life variable from the address of healPointer
  cout << "The pointer healPointer now has a new value of: "  << *healPointer << endl;
}