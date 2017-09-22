/* Written by Peter Brennan 7/11/17
  This program is for determining whether a department store customer has exceeded
  the credit limit put on his/her account.
*/

#include <iostream>

int main(){
  int accountNumber{0}; // This will store the account number
  double beginningBalance{0.0}; // Stores the balance at the beginning of the month
  double totalMonthlyCharges{0.0}; // Stores the total of charges that month
  double totalMonthlyCredits{0.0}; // stores the total credits added that month
  double allowedCreditLimit{0.0}; // Stores the maximum balance an account is allowed to have

  double newBalance{0.0};


  std::cout << "Enter account number (or -1 to quit): ";
  std::cin >> accountNumber;

  while (accountNumber != -1) {
    // Prompts the user to fill the data fields with the customer info
    std::cout << "Enter beginning balance: ";
    std::cin >> beginningBalance;
    std::cout << "Enter total charges: ";
    std::cin >> totalMonthlyCharges;
    std::cout << "Enter total credits: ";
    std::cin >> totalMonthlyCredits;
    std::cout << "Enter credit limit: ";
    std::cin >> allowedCreditLimit;

    // Calculates what the new balance is of the account
    newBalance = beginningBalance + totalMonthlyCharges - totalMonthlyCredits;
    std::cout << "New balance is:\t" << newBalance;
    std::cout << "\nAccount:\t" << accountNumber;
    std::cout << "\nCredit Limit:\t" << allowedCreditLimit;
    std::cout << "\nBalance:\t" << newBalance << "\n";

    // If the Credit limit is Exceeded then a message is printed to the screen
    if (newBalance > allowedCreditLimit){
      std::cout << "Credit limit Exceeded.\n";
    }

    // Prompts the user to enter the next account number or quit before the
    // next loop
    std::cout << "\nEnter account number (or -1 to quit): ";
    std::cin >> accountNumber;
  }

}
