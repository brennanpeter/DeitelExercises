/* Written by Peter Brennan 8/3/17
  This program modifies the code from Exercise 31 (the dollar amount class) so
  that it uses bankers rounding
*/

// Fig. 5.8: DollarAmount.h
// DollarAmount class stores dollar amounts as a whole number of pennies
#include <string>
#include <cmath>

class DollarAmount{
public:
  // initialize an amount for an int64_t value
  DollarAmount(int64_t dollars, int cents) : {
    amount = dollars * 100;
    cents = cents % 100;
    amount += cents;
  }

  // add right's amount to this object's amount
  void add(DollarAmount right) {
    // can access private data of other objects of the same class
    amount += right.amount;
  }

  void subtract(DollarAmount right) {
    // can access private data of other objects of the same class
    amount -= right.amount;
  }

  void addInterest(int rate, int divisor) {
    // create DollarAmount representing the interest
    DollarAmount interest {(amount * rate + divisor / 2) / divisor };

    add(interest);
  }

  void divide(int divisor) {
    amount = (amount + divisor / 2) / divisor;
  }

  // return a string representation of a DollarAmount object
  std::string toString() const {
    std::string dollars{std::to_string(amount / 100)};
    std::string cents{std::to_string(std::abs(amount % 100))};
    return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
  }

private:
  int64_t amount{0}; // dollar amount in pennies
};
