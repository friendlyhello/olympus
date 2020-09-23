#include <iostream>
#include <string>

using namespace std;

// --- UNDERSTANDING POINTERS ---

int main()
{
  // int number initialized to a value of 100
  int number = 100;

  // Pointer of type "pointer to int" named numberPtr
  int* numberPtr;

  // Initialize numberPtr with the "address of" a ("address of" operator is &)
  numberPtr = &number;

  // Print the address of numberPtr
  cout << "The address for numberPtr is: " << numberPtr << endl;

  // Print the value pointed to the address of numberPointer with the 
  // "dereference" operator *, which goes before numberPtr
  cout << "The value for numberPtr is: " << *numberPtr << endl;

  // GOAL: Create a new variable and assign it to the address of the new variable

  // New variable
  int secondNumber = 50;

  // Assign "address of" (which is the & operator) numberPtr to new variable secondNumber
  numberPtr = &secondNumber;

  // Print out the new address of numberPtr
  cout << "The new address of numberPtr is: " << numberPtr << endl;

  // Print dereference numberPtr with new variable value
  cout << "The new value for numberPtr is: " << *numberPtr << endl;
}