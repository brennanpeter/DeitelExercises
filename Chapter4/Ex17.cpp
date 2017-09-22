/* Written by Peter Brennan 7/12/17
  This program is for finding the largest of ten numbers input by the user.
  It is required to use a while loop and the following three variables: counter,
  number, and largest.
*/

#include <iostream>

int main() {
  int counter{1}; // This will keep track of how many numbers have been entered
  int number{0}; // This will hold the value of the current number entered
  int largest{0}; // This will hold the value of the largest number encountered so far

  std::cout << "Please enter 10 numbers\n";

  while (counter <= 10) {
    std::cout << "\nEnter a value for Number " << counter << " : ";
    std::cin >> number;

    // If the current value of number is greater than the current largest value,
    // Replace the largest value
    if (number > largest){
      largest = number;
    }

    // Display the current largest value
    std::cout << "Largest: " << largest << "\n";

    // Increment the counter
    counter++;
  }
}
