#include <iostream>
#include "doodle.h"

using namespace std;

class MyClass {
public:
  void PrintThis() {
    cout << "나의 주소는 " << this << endl;
  }
};

int doodle_55() {
  MyClass a, b;

  cout << "a의 주소는 " << &a << endl;
  cout << "b의 주소는 " << &b << endl;

  a.PrintThis();
  b.PrintThis();
}