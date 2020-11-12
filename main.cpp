#include <iostream>
using namespace std;

// -- Destructors Practice! --

class Character
{
  public:
  //constructor
  Character();

  //destructor
  ~Character();

  //  Pointer member variables that will be allocated to 
  //  the heap.
  string* CharacterName;
  float* CharacterHealth;

};

int main()
{
// Create new object dynamically using a pointer
Character* ptrToChar = new Character;

// Two things happen here:
// 1. Delete keyword deletes pointer (dynamic memory)
// 2. Desctructor gets called with delete keyword
delete ptrToChar;

}

//declaring constructor outside of the class
Character::Character()
{
  cout << "A Character was created!\n";

  CharacterName = new string("Moogle");
  CharacterHealth = new float(100.f);

    cout << "Character Name: " << *CharacterName << endl;
    cout << "Character Health: " << *CharacterHealth << endl;
}

//declaring destructor outside of the class
Character::~Character()
{
  cout << "A Character was deleted!\n";

// !-- YOU ARE RESPONSIBLE FOR MEMORY ALLOCATION --!

// Delete dynamic member variables or it will result
// in garbage data just hanging out in the heap!

//delete dynamic member variables
  delete CharacterName;
  delete CharacterHealth;
}

