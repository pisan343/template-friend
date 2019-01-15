/**
 * Template with a friend function
 *
 */

#include <iostream>
#include <string>
#include "box.hpp"

using namespace std;

int main() {
  Box<int> bi;
  bi.data = 10;
  cout << bi << endl;

  Box<string> bs;
  bs.data = "hello";
  cout << bs << endl;

  Room<int> ri;
  ri.data = 20;
  cout << ri << endl;

  Room<string> rs;
  rs.data = "world";
  cout << rs << endl;

  return 0;
}