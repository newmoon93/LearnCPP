#include <iostream>
#include "doodle.h"

using namespace std;

class MyClass {
public:
  MyClass() {
    cout << "생성자 호출" << endl;
  }
  ~MyClass() {
    cout << "소멸자 호출" << endl;
  }
};

MyClass globalObj;

int doodle_56() {
  cout << "main 시작" << endl;
  cout << "main 끝 " << endl;
}