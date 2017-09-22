/* Written by Peter Brennan on 6/29/17
   This program is a BMI Calculator that reads the users weight in pounds and height
   in inches then calculates and displays the users body mass index.
*/

#include <iostream>

int main(){
  int weight{0}; // This will store the user's weight
  int height{0}; // This will store the user's height


  std::cout << "BMI VALUES\nUnderweight:\tless than 18.5" << std::endl
            << "Normal:\t\tbetween 18.5 and 24.9" << std::endl
            << "Overweight:\tbetween 25 and 29.9" << std::endl
            << "Obese:\t\t30 or greater" << std::endl;

  // Prompts the user to enter a weight and height value
  std::cout << "Enter a weight in pounds followed by a height in inches: ";
  std::cin >> weight >> height;

  std::cout << std::endl << "BMI: " << (weight * 703) / (height * height)
            << std::endl;

}
