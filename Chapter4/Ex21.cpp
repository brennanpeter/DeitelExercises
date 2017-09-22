/* Written by Peter Brennan 7/12/17
  This program should print out a pattern like this:

  ****
  +++++++++
  ****
  ++++++++
  ****
  ++++++++
  ...

*/

#include <iostream>
using namespace std;

int main() {
  unsigned int count{1};

  while (count <= 10){
    cout << (count % 2 == 1 ? "****" : "++++++++") << endl;
    ++count;
  }
}
