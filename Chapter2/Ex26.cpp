/* Written by Peter Brennan on 6/28/17
   This program displays a checkerboard pattern with eight output statements.
   Then it tries to display the same pattern with as few statements as possible.
*/

#include <iostream>

int main(){
  // Printing the pattern with 8 separate statements
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;
  std::cout << "* * * * * * * *" << std::endl;
  std::cout << " * * * * * * * *" << std::endl;

  std::cout << std::endl;
  // Printing the pattern with only one statement
  std::cout << "* * * * * * * *" << std::endl
            << " * * * * * * * *" << std::endl
            << "* * * * * * * *" << std::endl
            << " * * * * * * * *" << std::endl
            << "* * * * * * * *" << std::endl
            << " * * * * * * * *" << std::endl
            << "* * * * * * * *" << std::endl
            << " * * * * * * * *" << std::endl;
            
}
