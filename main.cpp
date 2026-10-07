#include <iostream>
#include <string>

// Homework 6 — Richard Webster
// CIS 5 Week 06 · Menu

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

int input = 0;
string name;

do {

cout << "Input 1 for a greeting" << endl; 
cout << "Input 2 for a countdown from the number 10" <<endl; 
cout << "Input 3 to close the menu: " << endl;
cin >> input;

if (input == 1) {
  cout << "Enter your first name " << endl;
  cin >> name;
  cout << "Hello " << name << endl;
  break;
} else if (input == 2) {

  int countdown = 10;

  do {  
  cout << countdown << endl;
  --countdown;
  } while (countdown >= 0); 
  break;
} else if (input == 3) {

  cout << "Ending Program" << endl;
}
} while (input < 3);

cout << "Menu Closed" << endl;
return 0;
}
