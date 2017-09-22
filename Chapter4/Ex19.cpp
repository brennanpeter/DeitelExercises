/* Written by Peter Brennan 7/12/17
  This program is similar to exercise 4.17 but this program finds the two largest
  numbers in the group of ten
*/

#include <iostream>

int main() {
  int counter{1}; // This will keep track of how many numbers have been entered
  int number{0}; // This will hold the value of the current number entered
  int largest{0}; // This will hold the value of the largest number encountered so far
  int secondLargest{0}; // This will hold the second largest number

  std::cout << "Please enter 10 numbers\n";

  while (counter <= 10) {
    std::cout << "\nEnter a value for Number " << counter << " : ";
    std::cin >> number;

    // If the current value of number is greater than the current largest value,
    // Replace the largest value
    if (number > largest){
      secondLargest = largest;
      largest = number;
    }
    else if (number > secondLargest){
      secondLargest = number;
    }

    // Display the current largest value
    std::cout << "Largest: " << largest << "\n";
    std::cout << "Second Largest: " << secondLargest << "\n";
    // Increment the counter
    counter++;
  }
}
