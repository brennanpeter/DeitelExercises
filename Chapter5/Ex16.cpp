/* Written by Peter Brennan 7/19/17
  This program reads in five integers (max size 30) and the prints out five
  equivalent bar graphs.
*/

#include <iostream>

int main() {
  unsigned int number1{1}; // This stores the first of the five numbers
  unsigned int number2{1}; // Second of the five numbers
  unsigned int number3{1}; // Third of the five numbers
  unsigned int number4{1}; // Fourth of the five numbers
  unsigned int number5{1}; // Fifth of the five numbers

  std::cout << "Enter 5 intergers btween 1 and 30: ";
  std::cin >> number1 >> number2 >> number3 >> number4 >> number5;
  std::cout << "\n";

  for(int count{0}; count < number1;count++){
    std::cout << "*";
  }
  std::cout << "\n";

  for(int count{0}; count < number2;count++){
    std::cout << "*";
  }
  std::cout << "\n";

  for(int count{0}; count < number3;count++){
    std::cout << "*";
  }
  std::cout << "\n";

  for(int count{0}; count < number4;count++){
    std::cout << "*";
  }
  std::cout << "\n";

  for(int count{0}; count < number5;count++){
    std::cout << "*";
  }
  std::cout << "\n";

}
