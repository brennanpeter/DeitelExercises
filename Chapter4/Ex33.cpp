/* Written by Peter Brennan 7/13/17
  This program reads in three non-zero double values and determines if they could
  represent the sides of a triangle
*/

#include <iostream>

int main(){
  double sideA{0.0}; // Side a
  double sideB{0.0}; // Side b
  double sideC{0.0}; // Side c

  std::cout << "Enter a positive, non zero length for side a: ";
  std::cin >> sideA;
  std::cout << "Enter a positive, non zero length for side b: ";
  std::cin >> sideB;
  std::cout << "Enter a positive, non zero length for side c: ";
  std::cin >> sideC;

  if ( sideA + sideB > sideC && sideA + sideC > sideA && sideC + sideB > sideA){
    std::cout << "These side lengths could form a triangle\n";
  }
  else {
    std::cout << "These side lengths can not form a triangle\n";
  }
}
