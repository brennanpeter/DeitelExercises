/* Written by Peter Brennan 7/11/17
  This program is for calculating the sales-commission of an employee under
  the following rules:
  salespeople receive $200 a week in base pay and then 9% of their gross sales
  for that week
*/

#include <iostream>
#include <iomanip> // parameterized stream manipulators

int main() {
  double grossSales{0.0}; // This stores the persons gross sales for a week
  std::cout << std::setprecision(2) << std::fixed;
  std::cout << "Enter sales in dollars (-1 to end): ";
  std::cin >> grossSales;

  while (grossSales != -1) {
    std::cout << std::showpoint << "Salary is: " << grossSales * 0.09 + 200
              << "\n";

    std::cout << "\nEnter sales in dollars (-1 to end): ";
    std::cin >> grossSales;
  }
}
