/* Written by Peter Brennan on 6/28/17
   This program prompts the user for three integers and then prints out the sum,
   average, product, largest and smallest of the numbers
*/

#include <iostream>

int main(){
  int number1{0}; // This is the first number
  int number2{0}; // This is the second number
  int number3{0}; // This is the third number

  int sum{0}; // This is the sum
  int average{0}; // This is the average
  int product{0}; // This is the product
  int largest{0}; // This is the largest of the numbers
  int smallest{0}; // This is the smallest of the numbers

  // Prompts the user for three values
  std::cout << "Input three different integers: ";
  std::cin >> number1 >> number2 >> number3;

  // Sums the numbers
  sum = number1 + number2 + number3;
  std::cout << "Sum is " << sum << std::endl;
  // Calculates the average
  average = sum / 3;
  std::cout << "Average is " << average << std::endl;
  // Calculates the product
  product = number1 * number2 * number3;
  std::cout << "Product is " << product << std::endl;

  // Finds the Largest Number
  if (number1 > number2 && number1 > number3) {
    largest = number1;
  }
  else if (number2 > number3) {
    largest = number2;
  } else {
    largest = number3;
  }

  std::cout << "Largest is " << largest << std::endl;

  if (number1 < number2 && number1 < number3) {
    smallest = number1;
  }
  else if (number2 < number3) {
    smallest = number2;
  } else {
    smallest = number3;
  }
  std::cout << "Smallest is " << smallest << std::endl;


}
