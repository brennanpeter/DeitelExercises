/* Written by Peter Brennan 7/12/17
  This program runs an infinte loop that prints multiples of 2
*/

#include <iostream>
#include <cmath>

int main() {
  int power{1}; // This will store the current power of two to be printed
  while(true){
    std::cout << pow(2, power) << "\n";
    power++;
  }
}
