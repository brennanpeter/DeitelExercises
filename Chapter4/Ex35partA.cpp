/* Written by Peter Brennan 7/13/17
  This program reads in a non-negative integer and computes and prints it's
  factorial.
*/

#include <iostream>

int main() {
  int number{0}; // Stores the number the user inputs
  int factorial{0}; // This will store the factorial result value
  std::cout << "Enter a non-negative integer: ";
  std::cin >> number;

  // Sets the value of factorial to the value of number and then multiplies
  // by all positive integers less than the number and greater than 1
  factorial = number;
  while(number > 1) {
    number--;
    factorial *= number;
  }

  std::cout << "The factorial of " << number << " is " << factorial << "\n";
}
