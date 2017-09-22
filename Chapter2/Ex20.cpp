/* Written by Peter Brennan on 6/28/17
   This program prompts the user for a radius value and then calculates the
   diameter, circumference and area of the coresponding circle
*/

#define pi 3.14159
#include <iostream>

int main() {
  int radius{0}; // This is the radius variable

  std::cout << "Enter an integer radius" << std::endl;
  std::cin >> radius;

  std::cout << "Diameter: " << 2 * radius << std::endl << "Circumference: "
    << 2 * pi * radius << std::endl << "Area: " << radius * radius * pi <<
    std::endl;

}
