/* Written by Peter Brennan 7/16/17
  This program calculates the factorials of the numbers 1 through 20
*/

#include <iostream>

int main() {
  long factorial{0}; // this will store the factorial values printed to the screen
  std::cout << "This program calculates the factorials of the numbers 1 through 20\n";

  for (int currentNumber{1}; currentNumber <= 20; currentNumber++) {
    factorial = currentNumber;
    for(int factorialCalculation{currentNumber - 1}; factorialCalculation > 0; factorialCalculation--){
      factorial *= factorialCalculation;
    }
    std::cout << "The Factorial of " << currentNumber << " is: " << factorial << "\n";
  }
}
