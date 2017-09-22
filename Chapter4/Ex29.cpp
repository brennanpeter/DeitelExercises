/* Written by Peter Brennan 7/12/17
  This program displays a checkerboard pattern on the screen using only the
  following three printing statements and loops.

  std::cout << "*";
  std::cout << " ";
  std::cout << std::endl;

*/

#include <iostream>

int main() {
  int rowCounter{1};

  // This will loop down for each row
  while (rowCounter <= 8) {
    int columnCounter{0}; // This will keep track of how many characters have been placed
    // This decides whether to start the row with an asterisk or a space character
    if (rowCounter % 2 == 1){
      while(columnCounter < 8){
        std::cout << "*";
        std::cout << " ";
        columnCounter++;
      }
    }
    else {
      while(columnCounter < 8){
        std::cout << " ";
        std::cout << "*";
        columnCounter++;
      }
    }
    std::cout << std::endl;
    rowCounter++;
  }
}
