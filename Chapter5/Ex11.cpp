/* Written by Peter Brennan 7/16/17
  This program accepts an arbitrary number of integers from the user and then
  finds the smallest
*/

#include <iostream>

int main() {
  unsigned int numberOfInputs{0}; // This will be the number of inputs the user wants to sort through
  int smallest{0}; // This will store the samllest of the values
  int current{0};
  std::cout << "Please enter the number of ints you will be entering: ";
  std::cin >> numberOfInputs;


  for(int count{1}; count <= numberOfInputs; count++) {
    std::cout << "Enter Integer Number " << count << ": ";
    std::cin >> current;
    if (count == 1) {
      smallest = current;
    }
  }

  std::cout << "\nSmallest: " << smallest << "\n";
}
