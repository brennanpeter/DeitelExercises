/* Written by Peter Brennan on 6/28/17
   This program takes a five digit integer and prints out each digit one by one;
   separated by three spaces each.
*/

#include <iostream>

int main(){
  int fiveDigitNumber{0}; // This will store the users original (five digigt) input
  int digit1{0}; // This will store the first digit
  int digit2{0}; // This will store the second digit
  int digit3{0}; // This will store the third digit
  int digit4{0}; // This will store the fourth digit
  int digit5{0}; // This will store the fifth digit

  std::cout << "Enter a five digit number: ";
  std::cin >> fiveDigitNumber;

  // This separates the five digits by isolating the ones place of the fiveDigitNumber
  // and then moving the next digit into the one's place by dividing by ten
  digit5 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;
  digit4 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;
  digit3 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;
  digit2 = fiveDigitNumber % 10;
  fiveDigitNumber = fiveDigitNumber / 10;
  digit1 = fiveDigitNumber % 10;

  std::cout << "Result: " << digit1 << "   " << digit2 << "   " << digit3 << "   "
            << digit4 << "   " << digit5 << std::endl;

}
