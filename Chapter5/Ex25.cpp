/* Written by Peter Brennan 8/3/17
  This program modifies fig 5.13 so that it does not use a break statement to
  exit the loop.
*/

// Fig 5.13: BreakTest.cpp
// break statement exiting a for statement.
#include <iostream>
using namespace std;

int main() {
  // Original code
  unsigned int count; // control variable also used after loops

  for (count = 1; count <= 10; count++){
    if (count == 5) {
      break; // terminates loop if count is 5
    }

    cout << count << " ";
  }

  cout << "\nBroke out of loop at count = " << count << endl;

  // Modified code
  for (count = 1; count <= 10 && count != 5; count++){
    cout << count << " ";
  }

  cout << "\nBroke out of loop at count = " << count << endl;
}
