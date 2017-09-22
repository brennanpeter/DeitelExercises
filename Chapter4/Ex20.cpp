/* Written by Peter Brennan 7/12/17
  This program edits the code in fig 4.14 by adding an input validation system
*/

// Fig. 4.14: Analysis.cpp
// Analysis of examination results using nested control staements.
#include <iostream>
using namespace std;

int main() {
  // initializing variables in declarations
  unsigned int passes{0};
  unsigned int failures{0};
  unsigned int studentCounter{1};

  // process 10 students using a counter-controllerd loop
  while (studentCounter <= 10) {
    // prompt user for input and obtain value form user
    int result{0}; // This will store the user input
    int misInputCounter{0}; // This will tell the the screen to display a misinput message

    do {

      if (misInputCounter > 0) {
        std::cout << "Invalid input! Please re-enter\n";
      }

      cout << "enter result (1 = pass, 2 = fail): ";
      cin >> result;
      // If the user enters an invalid input, re-prompt
      misInputCounter++;
    } while (result != 1 && result != 2);

    misInputCounter = 0;
    // if...else is nested in while statement
    if (result == 1){
      passes = passes + 1;
    }
    else {
      failures = failures + 1;
    }

    // increment studentCounter so loop eventually terminates
    studentCounter = studentCounter + 1;
  }

  // termination phase; prepare and display results
  cout << "Passed: " << passes << "\nFailed: " << failures << endl;

  // determine whether more than 8 students passed
  if (passes > 8){
    cout << "Bonus to instructor!" << endl;
  }

}
