/* Written by Peter Brennan 8/2/17
  This program calculates all possible pythagorean triples with values under 500
  using brute force
*/

#include <iostream>


int main() {

  std::cout << "pythagorean triples:\n";

  // This wll iterate over every possible side1 value
  for(int side1{1}; side1 < 501; side1++){
    // This wll iterate over every possible side2 value
    for(int side2{1}; side2 < 501; side2++){
      // This wll iterate over every possible hypotenuse value
      for(int hypotenuse{1}; hypotenuse < 501; hypotenuse++){
        // Checks for a pythagorean triple
        if ((side1 * side1 + side2 * side2) == (hypotenuse * hypotenuse)){
          std::cout << "Side 1: " << side1 << "\tSide 2: " << side2 << "\tHypotenuse: "
          << hypotenuse << "\n";

        }
      }
    }
  }
}
