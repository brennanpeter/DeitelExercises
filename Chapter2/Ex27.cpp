/* Written by Peter Brennan on 6/28/17
   This program receives a character through std::cin and then prints out the
   corresponding ASCII value
*/

#include <iostream>

int main(){
  char myChar{'\0'}; // This is the variable that holds the charcter input

  // Prompts the user for a character and receives input from std::cin
  std::cout << "Enter a character: ";
  std::cin >> myChar;

  // Casts the character and prints the corresponding ASCII value to std::out
  std::cout << "The ASCII value is: " << static_cast<int>(myChar) << std::endl;
  
}
