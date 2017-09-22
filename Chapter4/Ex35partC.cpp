/* Written by Peter Brennan 7/13/17
  This program computes the value of e^x to the degree of precision desired
  by the user and for an x value input by the user.
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
  double xInput{0.0}; // This is the x value input by the user
  double result{1.0}; // this will be the constant e that is output

  //Displays more decimal places than the standard of six past the decimal point
  std::cout << std::setprecision(30) << std::fixed;

  std::cout << "This program computes the value of e^x" <<
  "\nEnter the degree of accuracy desired for the calculation and then an x value: ";
  std::cin >> accuracy >> xInput;

  // The counter MUST start at 1 to avoid dividing by 0!
  int counter{1}; // This will count the steps in the while loop

  while (counter < accuracy) {
    result += xInput / factorial(counter);
    counter++;
  }

  std::cout << "Value of e^x: " << result << "\n";
}
