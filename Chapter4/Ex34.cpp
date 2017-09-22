/* Written by Peter Brennan 7/13/17
  This program reads in three non-zero double values and determines if they could
  represent the sides of a RIGHT triangle
*/

#include <iostream>

int main(){
  int sideA{0}; // Side a
  int sideB{0}; // Side b
  int sideC{0}; // Side c

  // Prompts the user for the side lengths
  std::cout << "Enter a positive, non zero integer length for side a: ";
  std::cin >> sideA;
  std::cout << "Enter a positive, non zero integer length for side b: ";
  std::cin >> sideB;
  std::cout << "Enter a positive, non zero integer length for side c: ";
  std::cin >> sideC;

  // Use the pythagorean theorem to verify that a right triangle could be formed
  if (sideA * sideA + sideB * sideB == sideC * sideC ||
      sideA * sideA + sideC * sideC == sideB * sideB ||
      sideC * sideC + sideB * sideB == sideA * sideA){
    std::cout << "These side lengths could form a right triangle\n";
  }
  else {
    std::cout << "These side lengths can not form a right triangle\n";
  }
}
