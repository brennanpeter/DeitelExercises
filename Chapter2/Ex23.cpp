/* Written by Peter Brennan on 6/28/17
   This program finds the largest and smallest of five integers using only
   conditional statements.
*/

#include <iostream>

int main(){
  int number1{0}; // This is the first number
  int number2{0}; // This is the second number
  int number3{0}; // This is the third number
  int number4{0}; // This is the fourth number
  int number5{0}; // This is the fifth number

  int largest{0}; // This is the Largest variable
  int smallest{0}; // This is the smallest variable

  // Prompts the user for five integers
  std::cout << "Enter five integers: " << std::endl;
  std::cin >> number1 >> number2 >> number3 >> number4 >> number5;

  // Finds the largest of the five integers
  if(number1 > number2 && number1 > number3 && number1 > number4 && number1 > number5){
    largest = number1;
  }
  else if(number2 > number3 && number2 > number4 && number2 > number5){
    largest = number2;
  }
  else if(number3 > number4 && number3 > number5){
    largest = number3;
  }
  else if(number4 > number5){
    largest = number4;
  }
  else {
    largest = number5;
  }

  std::cout << "Largest: " << largest << std::endl;

  // Finds the smallest of the five integers
  if(number1 < number2 && number1 < number3 && number1 < number4 && number1 < number5){
    smallest = number1;
  }
  else if(number2 < number3 && number2 < number4 && number2 < number5){
    smallest = number2;
  }
  else if(number3 < number4 && number3 < number5){
    smallest = number3;
  }
  else if(number4 < number5){
    smallest = number4;
  }
  else {
    smallest = number5;
  }

  std::cout << "Smallest: " << smallest << std::endl;

}
