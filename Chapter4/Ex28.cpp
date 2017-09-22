/* Written by Peter Brennan 7/12/17
  This program converts a binary number to decimal and prints the output
*/

#include <iostream>
#include <cmath>

int main() {
  unsigned int binaryNumber{0};
  int digitCounter{0}; // This will keep track of what the current place value is
  int decimalNumber{0};

  // Prompts the user for a binary number;
  std::cout << "Enter a Binary Number: ";
  std::cin >> binaryNumber;

  // Loop through each digit of the binary number
  while (binaryNumber > 0) {
    // If there is a 1 in the place add the value to the decimalNumber
    if (binaryNumber % 2 == 1){
      decimalNumber += pow(2, digitCounter);
    }

    binaryNumber = binaryNumber / 10;
    digitCounter++;
  }

  std::cout << "Decimal equivalent: " << decimalNumber << "\n";
}
