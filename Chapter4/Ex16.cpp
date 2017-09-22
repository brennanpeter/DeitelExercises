/* Written by Peter Brennan 7/12/17
  This program is for calculating the gross pay for each of several employees
  using the following rules: The company pays "straight time" for the first 40
  hours worked and "time-and-a-half" for all hours worked in excess of 40 hours.
*/

#include <iostream>
#include <iomanip>

int main() {
  int hoursWorked{0}; // this will store the number of hours worked by the current employees
  double hourlyRate{0}; // This stores the current employee's hourly rate
  double salary{0}; // This stores the current employees salary


  std::cout << std::setprecision(2) << std::fixed;
  // Prompts the user for the number of hours worked
  std::cout << "Enter hours worked (-1 to end): ";
  std::cin >> hoursWorked;

  while (hoursWorked != -1) {
    std::cout << "Enter hourly rate of the employee ($00.00): ";
    std::cin >> hourlyRate;

    if (hoursWorked > 40){
      // Calculates the pay for the first 40 hours, then the time-and-a-half hours
      // then adds them together
      salary = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
    } else {
      salary = hoursWorked * hourlyRate;
    }
    std::cout << "Salary is $" << salary << "\n";

    // Prompts the user for the next employee
    std::cout << "\nEnter hours worked (-1 to end): ";
    std::cin >> hoursWorked;
  }
}
