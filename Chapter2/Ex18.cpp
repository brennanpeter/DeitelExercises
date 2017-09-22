/* Written by Peter Brennan on 6/28/17
   This program prompts the user for two integers and then prints out which one
   is larger or prints the numbers are equal
*/

#include <iostream>

int main(){
  int number1{0}; // This is the first number
  int number2{0}; // This is the second numeber

  std::cout << "Enter two integers: ";
  std::cin >> number1 >> number2;

  if (number1 > number2){
    std::cout << number1 << " is larger than " << number2 << std::endl;
  }
  else if (number2 > number1){
    std::cout << number2 << " is larger than " << number1 << std::endl;
  }
  else if (number1 == number2){
    std::cout << "These numbers are equal" << std::endl;
  }
}
