/* Written by Peter Brennan 7/16/17
  This program modifies the compound-interest application of Fig 5.6 for
  interest rates 5% - 10%
*/

// Fig. 5.6: Interest.cpp
// Compound-interest calculations with for.
#include <iostream>
#include <iomanip>
#include <cmath> // For the pow function
using namespace std;

int main() {
  // set floating-point number format
  cout << fixed << setprecision(2);

  double principal{1000.0}; // initial amount before Interest
  double rate{0.05}; // interest rates

  cout << "Initial principal: " << principal << rate << endl;
  cout << "      Interest rate:       " << rate << endl;

  // display headers
  cout << "\nYear" << setw(20) << "Amount of deposit" << endl;

  // Calculate amount on deposit for each of ten years
  for (unsigned int year{1}; year <= 10; year++){
    // Calculate amount on deposit at the end of the specified year
    double amount = principal * pow(1.0 + rate, year);

    // display the year and the amount
    cout << setw(4) << year << setw(20) << amount << endl;
  }
}
