/* Written by Peter Brennan 8/3/17
  This program tests the out put of the statement in exercise 26
*/

#include <iostream>

int main(){
  for(unsigned int i{1}; i <= 5; i++){
    for(unsigned int j{1}; j <= 3; j++){
      for(unsigned int k{1}; k <= 4; k++){
        std::cout << '*';
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
}
