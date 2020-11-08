#include <iostream>
#include <string>
using namespace std;

// -- Dynamic Variables Exercise --

// Using new, delete and nullptr keywords

//struct
struct Character 
{
  string Name;
  float Health;
};

int main()
{
//create pointer of type Character struct
Character* PtrToChar = new Character();
// This pointer to Character struct (PtrToChar) is now allocated to the -heap-

// NOTICE 'new Character();' struct LOOKS LIKE A FUNCTION. It essentially is. It is also a (default) constructor which automatically holds values of 0.

PtrToChar->Name = "Mog";

// I am responsible for memory allocation. If creating a new dynamic value for the heap, I must also delete it using the 'delete' keyword.



}



