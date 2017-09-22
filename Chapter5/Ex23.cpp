/* Written by Peter Brennan 8/3/17
  This program prints a diamond to the screen using iteration statements
*/


#include <iostream>
#include <cmath>

int main() {


/* Method 1
 This uses two loops to iterate through the diamond in a grid: iterates through
 each column in every row and then moves onto the next row. There are four
 mathematical statement that control whther or not a space is printed. We can
 imagine each statement excludes a corner of the grid from being filled with
 asterisks. For example, Condition A excludes the top left corner from being
 filled.

        (row + column >= 6)   ===>  true when both row and column are not small

 */


  // iterates through 9 rows
  for(int row{1}; row <= 9; row++){
    // iterates through 9 columns
    for(int column{1}; column <= 9; column++){

      //     condition A            condition B             condition C         condition d
      if ((row + column > 5) && (row + column < 15) && (column - row < 5) && (row - column < 5)) {
        // prints an asterisk character
        std::cout << "*";
      }
      else {
        std::cout << " ";
      }

    }
    std::cout << "\n";
  }

  // Messing around with \r
/*
  // Space out the two diamonds
  std::cout << "\n\n";

  // iterates through 9 rows and decrements the number of spaces counter
  for(int row{1}, numberOfSpaces{4}; row <= 9; row++, numberOfSpaces--){
    // iterates through 9 columns
    for(int column{1}; column <= 9; column++){
      std::cout << "*";
    }

    std::cout << "\r";
    std::cout << "\t";

    for(int column{1}; column <= std::abs(numberOfSpaces); column++){
      std::cout << " ";
    }


    std::cout << "\n";
  }

  */
}
