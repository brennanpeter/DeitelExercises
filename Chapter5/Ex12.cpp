/* Written by Peter Brennan 7/16/17
  This program calculates the product of the od integers from 1 to 15
*/

#include <iostream>

int main() {
  int total{0}; // This will store the total

  for (int count{1}; count <= 15; count += 2) {
    total += count;
  }

  std::cout << "The sum of the odd integers from 1 to 15 is: " << total << "\n";
}
