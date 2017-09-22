/*

  ***************** Modified on 8/3/17 ********************
  Modified so that the triangles are printed horizontally instead of vertically
  by re nesting the loops


  Written by Peter Brennan 7/19/17
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


  for(unsigned int row{1}; row <= 10; row++){

    for(unsigned int col{1}; col <= 10; col++){
      // Triangle a
      if (col <= row) {
        std::cout << "*";
      }
      else {
        std::cout << " ";
      }
    }

    // Print something to space it out
    std::cout << "  ";

    for(unsigned int col{1}; col <= 10; col++){
      // Triangle b
      if (col <= 11 - row) {
        std::cout << "*";
      }
      else {
        std::cout << " ";
      }
    }

    // Print something to space it out
    std::cout << "  ";

    for(unsigned int col{1}; col <= 10; col++){
      // Triangle c
      if(col < row){
        std::cout << " ";
      }
      else {
        std::cout << "*";
      }
    }

    // Print something to space it out
    std::cout << "  ";

    for(unsigned int col{1}; col <= 10; col++){
      // Triangle d
      if(col < 11 - row){
        std::cout << " ";
      }
      else {
        std::cout << "*";
      }
    }

    // return to the next line
    std::cout << "\n";
    }
  }
