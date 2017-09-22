/* Written by Peter Brennan 6/28/17
   This program prints the numbers 1 through 4 in three different ways
*/

#include <iostream>

int main(){
  // Printing with one stream insertion and one statement
  std::cout << "1 2 3 4\n";

  // Printing with four stream insertion operators
  std::cout << "1 " << "2 " << "3 " << "4\n";

  // Printing with four statements
  std::cout << "1 ";
  std::cout << "2 ";
  std::cout << "3 ";
  std::cout << "4\n";
}
