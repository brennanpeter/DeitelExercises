/* Written by Peter Brennan on 6/28/17
   This program determines if an integer is a multiple of another integer
*/

#include <iostream>

int main(){
  int number1{0}; // This will store the first int
  int number2{0}; // This will store the second int

  // Prompts the user for two integers
  std::cout << "Enter two integers: ";
  std::cin >> number1 >> number2;

  if (number1 > number2){
    if (number1 % number2 == 0){
      std::cout << "The numbers are multiples" << std::endl;
    }
    else {
      std::cout << "The numbers are not multiples" << std::endl;
    }
  }
  else {
    if (number2 % number1 == 0){
      std::cout << "The numbers are multiples" << std::endl;
    }
    else {
      std::cout << "The numbers are not multiples" << std::endl;
    }
  }
}
