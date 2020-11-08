#include <iostream>
using namespace std;

// -- Dynamic Variables Exercise --

// Using new, delete and nullptr keywords

//struct
struct Character 
{
  //constructor
  Character();

  void Greeting();

  string Name;
  float Health;
};
Character::Character()
    {
      Name = "Celes";
      Health = 100.f;
    }

void Character::Greeting()
{
  cout << "A hero appears!" << endl;
}

int main()
{
  for (int i = 0; i < 5; i++)
  {
    //create pointer of type Character struct
    Character* PtrToChar = new Character();

    // This pointer to Character struct (PtrToChar) is now allocated to the -heap- taking up dynamic memory at run time.

    // NOTICE 'new Character();' struct LOOKS LIKE A FUNCTION. It essentially is. It is also a (default) constructor which automatically holds values of 0.

    // I am responsible for memory allocation. If creating a new dynamic value for the heap, I must also delete it using the 'delete' keyword.

    // The delete keyword frees up the memory allocation in the heap. YOU MUST DELETE DATA FROM THE HEAP in order to not have garbage data or cause memory leaks.

    cout << PtrToChar->Name << endl;
    PtrToChar->Greeting();

    delete PtrToChar;
  }
}



