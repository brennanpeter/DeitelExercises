/* Written by Peter Brennan 6/28/17
   This program prompts the user for two integers and then prints out the sum,
   product difference and quotient of the two numbers
*/

#include <iostream>

int main(){
  int number1{0}; // This is the first integer
  int number2{0}; // This is the second integer

  int sum{0}; // This is the sum variable
  int difference{0}; // This is the difference
  int product{0}; // This is the product
  int quotient{0}; // This is the quotient

  std::cout << "Enter two integers: ";

  std::cin >> number1 >> number2;

  sum = number1 + number2;
  difference = number1 - number2;
  product = number1 * number2;
  quotient = number1 / number2;

  std::cout << "Sum: " << sum << "\nDifference: " << difference << "\nProduct: "
    << product << "\nQuotient: " << quotient << std::endl;
}
