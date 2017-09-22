/* Written by Peter Brennan on 6/28/17
   This program determines if an integer is even or odd
*/

#include <iostream>

int main(){
  int number{0}; // This will store the integer

  // Prompt the user for a value
  std::cout << "Enter a value: " << std::endl;
  std::cin >> number;

  if(number % 2 == 0){
    std::cout << "The number is even" << std::endl;
  }
  else {
    std::cout << "The number is odd" << std::endl;
  }

}
