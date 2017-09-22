/* Written by Peter Brennan 7/19/17
  This program prints out four triangles made of asterisks using for loops.

  a looks like this (but larger):

  *
  **
  ***


  b looks like this:

  ***
  **
  *

  c looks like this:

  ***
   **
    *

  d looks like this:

    *
   **
  ***
*/

#include <iostream>

int main() {

  // Triangle a
  for(unsigned int row{1}; row <= 10; row++){
    for(unsigned int col{1}; col <= row; col++){
      std::cout << "*";
    }
    std::cout << "\n";
  }

  // Print something to space it out
  std::cout << "\n";

  // Triangle b
  for(unsigned int row{10}; row >= 1; row--){
    for(unsigned int col{1}; col <= row; col++){
      std::cout << "*";
    }
    std::cout << "\n";
  }

  // Print something to space it out
  std::cout << "\n";

  // Triangle c

  // For ten rows
  for(unsigned int row{1}; row <= 10; row++){
    for(unsigned int col{1}; col <= 10; col++){
      if(col < row){
        std::cout << " ";
      }
      else {
        std::cout << "*";
      }
    }
    std::cout << "\n";
  }

  // Print something to space it out
  std::cout << "\n";

  // Triangle d
  for(unsigned int row{10}; row >= 1; row--){
    for(unsigned int col{1}; col <= 10; col++){
      if(col < row){
        std::cout << " ";
      }
      else {
        std::cout << "*";
      }
    }
    std::cout << "\n";
  }
}
