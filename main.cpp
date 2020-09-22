#include <iostream>
using namespace std;

// Function prototypes

// Welcome message to user
void Welcome();

// Function to hold y or n
char GetYesNo();

// Function to return y or no based on user input of y or n
void PrintResponse(char responseToPrint);


int main() {
  
  Welcome();

  int answer = GetYesNo();
  PrintResponse(answer);

}

void Welcome()
{
  cout << "Welcome!" << endl;
}

char GetYesNo()
{
  cout << "Please enter y or n" << endl;

  char response;
  cin >> response;

  return response;
}

void PrintResponse(char responseToPrint)
{
  cout << "You entered: " << responseToPrint << endl;
}