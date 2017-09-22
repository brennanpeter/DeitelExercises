/* Written by Peter Brennan 7/13/17
  This program calculates the constant e to the degree of precision desired
  by the user using the mathematical series:

  e  =  1  +  1/1!  +  1/2!  +  1/3!  +  ...

*/

#include <iostream>
#include <iomanip>

// This is a short function for calculating the factorial
int factorial(int counterInput){
  int factorialResult{0};

  factorialResult = counterInput;
  while(counterInput > 1) {
    counterInput--;
    factorialResult *= counterInput;
  }
  return factorialResult;
}

int main() {
  int accuracy{0}; // stores the accuracy for the calculation input by the user
  double result{1.0}; // this will be the constant e that is output

  //Displays more decimal places than the stadard of six past the decimal point
  std::cout << std::setprecision(30) << std::fixed;

  std::cout << "This program calculates the mathematical constant e.\nEnter the degree of accuracy desired for the calculation: ";
  std::cin >> accuracy;



  // The counter MUST start at 1 to avoid dividing by 0!
  int counter{1}; // This will count the steps in the while loop

  while (counter < accuracy) {

    result += 1.0 / factorial(counter);
    counter++;
  }

  std::cout << "the constant e: " << result << "\n";
}
