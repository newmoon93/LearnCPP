// 정적 할당: int a;
// 동적 할당: 프로그램 실행 중에 변수를 메모리에 할당하는 것

#include <iostream>
#include "doodle.h"

using namespace std;

int doodle_65() {
  int *a = new int(5);  // 메모리 할당

  cout << a << endl;
  cout << *a << endl;

  *a = 10; 
  
  cout << a << endl;
  cout << *a << endl;

  delete a;  // 공간 삭제

  return 0;
}