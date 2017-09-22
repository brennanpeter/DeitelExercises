/* Written by Peter Brennan 7/12/17
  This program calculates a circles Diameter, Circumference and Area of a circle
*/

#include <iostream>

#define pi 3.14159

int main() {
  double radius{0.0};

  std::cout << "Enter a radius: ";
  std::cin >> radius;

  std::cout << "Diameter: " << radius * 2 << "\n";
  std::cout << "Circumference: " << 2 * pi * radius << "\n";
  std::cout << "Area: " << radius * radius * pi << "\n";
}
