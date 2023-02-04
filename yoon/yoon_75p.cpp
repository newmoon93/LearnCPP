#include <iostream>
#include "yoon.h"

using namespace std;

void SwapByValue(int num1, int num2)
{
  int temp = num2;
  num2 = num1;
  num1 = temp;
}

void SwapByRef(int * ptr1, int * ptr2)
{
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int yoon_75p(void)
{
  int val1 = 10;
  int val2 = 20;
  SwapByValue(val1, val2);  // 함수외부에 선언된 변수에 접근 불가
  cout << "val1: " << val1 << endl;
  cout << "val2: " << val2 << endl;

  SwapByRef(&val1, &val2);  // 인자로 전달 받은 주소 값이 참조하는 영역에 접근
  cout << "val1: " << val1 << endl;
  cout << "val2: " << val2 << endl;

  return 0;
}