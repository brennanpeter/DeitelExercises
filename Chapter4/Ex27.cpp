/* Written by Peter Brennan 7/12/17
  This program reads in a five digit integer and determines if it is a
  palindrome.
*/

#include <iostream>

int main() {
  int fiveDigitNumber{0};

  int digit1{0};
  int digit2{0};
  int digit3{0};
  int digit4{0};
  int digit5{0};

  std::cout << "Enter a five digit number: ";
  std::cin >> fiveDigitNumber;

  digit1 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;

  digit2 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;

  digit3 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;

  digit4 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;

  digit5 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;

  if (digit1 == digit5 && digit2 == digit4) {
    std::cout << "The number is a palindrome\n";
  }
  else {
    std::cout << "The number is not a palindrome\n";
  }

}
