#include <iostream>
#include <string>
using namespace std;

struct Container
{

  string Name;

  int X;
  int Y;
  int Z;

};

int main()
{
// create new struct of type Container

// initilize container struct in a list
Container container = {"Mog", 5, 10, 15}; 

// create Pointer of type Container
// PtrToCont is now initilaized for the variable address &container
Container* PtrToCont = &container;

// access struct data with Pointer

cout << (*PtrToCont).Name << endl;

// using "arrow notation" - syntactic sugar
cout << PtrToCont->Name << endl;

}
