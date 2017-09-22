/* Written by Peter Brennan 7/12/17
  This program prints out a square of astrisks given a side length between 1
  and 20.
*/

#include <iostream>

int main() {
  int sideLength{0};
  int counter{0};


  // Prompts the user for a side length
  std::cout << "Enter a side length between 1 and 20: ";
  std::cin >> sideLength;

  // Loops to fil the top row with asterisks
  while (counter < sideLength) {
    std::cout << "*";
    counter++;
  }
  std::cout << "\n";
  counter = 0;

  // Prints the edges of the square and the spaces in the middle
  // for each row of the square
  while (counter < sideLength - 2) {
    std::cout << "*";
    int counter2{0};

    while (counter2 < sideLength - 2) {
      std::cout << " ";
      counter2++;
    }

    std::cout << "*" << "\n";
    counter++;
  }
  counter = 0;

  // Loops to fil the bottom row with asterisks
  while (counter < sideLength) {
    std::cout << "*";
    counter++;
  }
  counter = 0;
  std::cout << "\n";
}
