/* Written by Peter Brennan 7/19/17
  This program reads in a series of pairs of numbers, the product number and the quanitiy
  sold, and then uses a switch statement to determine the retail price for each
  product.
*/

#include <iostream>
#include "DollarAmount.h"


int main() {
  int productNumber{0}; // This stores the product number
  unsigned int quantitySold{0}; // This stores the number product that was sold
  DollarAmount totalValue{0}; // This stores the total value of all of the products entered
  DollarAmount price{0}; // This stores the price of the current product being counted

  std::cout << "Enter a product number and a quantity sold (enter -1 as the product number to quit):";
  std::cin >> productNumber >> quantitySold;

  while (productNumber != -1) {

    switch (productNumber) {
      case 1:
      price.add(298);
        break;
      case 2:
      price.add(450);
        break;
      case 3:
      price.add(998);
        break;
      case 4:
      price.add(449);
        break;
      case 5:
      price.add(687);
        break;
      default:
        break;
    }
    totalValue += price * productNumber;

    std::cout << "Enter a product number and a quantity sold (enter -1 as the product number to quit):";
    std::cin >> productNumber >> quantitySold;
  }

  std::cout << "Total Value of products sold: " << totalValue << "\n";
}
