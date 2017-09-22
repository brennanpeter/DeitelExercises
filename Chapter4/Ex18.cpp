/* Written by Peter Brennan 7/12/17
  This program prints the following table of values to the screen using a while
  loop and the tab escape sequence.

  N     10*N      100*N     1000*N

  1     10        100       1000
  2     20        200       2000
  3     30        300       3000
  4     40        400       4000
  5     50        500       5000
*/

#include <iostream>

int main() {
  int counter{1}; // This stores a counter variable for N
  std::cout << "N\t10*N\t100*N\t1000*N\n\n";

  while (counter <= 5){
    std::cout << counter << "\t" << counter * 10 << "\t" << counter * 100 << "\t"
              << counter * 1000 << "\n";
    counter++;
  }
}
