/* Written by Peter Brennan 8/3/17
  This program replaces a continue statement in Fig 5.14
*/

#include <iostream>
using namespace std;

int main() {
  for (unsigned int count{1}; count <= 10; count++) { // loop 10 times
    if (count == 5) {
      continue; // skip remaining code in loop body if count is 5
    }

    cout << count << " ";
  }

  cout << "\nUsed continue to skip printing 5" << endl;


  // Modified version -- skips 5 with the ternery operator

  for (unsigned int count{1}; count <= 10; count == 4 ? count += 2 : count++) {

    cout << count << " ";
  }

  cout << "\nUsed continue to skip printing 5" << endl;


}
