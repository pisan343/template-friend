/**
 * Box and Room templates
 * They can store any type of data
 *
 * Box has operator<< defined inside class definition
 * Room has it defined afterwards
 */
#include <iostream>

using namespace std;

// defining a Box that can store any data type
// with an operator<< for display
template<typename T>
class Box {
  friend ostream &operator<<(ostream &os, const Box<T> &bx) {
    os << "<box " << bx.data << ">";
    return os;
  }
 public:
  T data;
};

// defining a Room that can store any data type
// with an operator<< for display implemented separately
template<typename T>
class Room {
  template<typename K>
  friend ostream &operator<<(ostream &os, const Room<K> &rm);
 public:
  T data;
};

// implementation for operator<<
// can use T or K does not make a difference
template<typename K>
ostream &operator<<(ostream &os, const Room<K> &rm) {
  os << "<room " << rm.data << ">";
  return os;
}
