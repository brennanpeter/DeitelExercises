/* Written by Peter Brennan 8/2/17
  This program calculates the value of pi using the following infinite series:

  pi =  4 - 4/3 + 4/5 - 4/6 + 4/7 - 4/8 ...
*/

#include <iostream>
#include <iomanip>


int main(){
double pi{4.0};
int iteration{1};

std::cout << std::setprecision(20) << std::fixed;

  for (; iteration < 200000; iteration++){
    // Chooses to add of subtract the curent term
    if(iteration % 2 == 0){
      pi += 4 / static_cast<double>(iteration * 2 + 1);
    }
    else {
      pi -= 4 / static_cast<double>(iteration * 2 + 1);
    }
    //outputs the results of each iteration to the screen
    std::cout << "Iteration " << iteration << ":\tPi: " << pi << "\n";
  }
}
