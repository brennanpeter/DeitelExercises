/* Written by Peter Brennan 8/3/17
  This program modifies the previous program such that it prints a diamond to
  the screen of a size that the user inputs using iteration statements.
*/

#include <iostream>

int main() {
  int rows{1}; // This will store the value the user inputs
  std::cout << "Please enter an ODD number (bewtween 1 and 19) of rows\nyou would like the diamond to have: ";
  std::cin >> rows;

  std::cout << rows / 2 + 1 << "\n";

  // iterates through 9 rows
  for(int row{1}; row <= rows; row++){
    // iterates through 9 columns
    for(int column{1}; column <= rows; column++){

      //     condition A                        condition B
      if ((row + column > (rows / 2 + 1)) && (row + column < (rows / 2 + 1) * 3)
      //         condition C                    condition d
       && (column - row < (rows / 2 + 1)) && (row - column < (rows / 2 + 1))) {
        // prints an asterisk character
        std::cout << "*";
      }
      else {
        std::cout << " ";
      }

    }
    std::cout << "\n";
  }

}
