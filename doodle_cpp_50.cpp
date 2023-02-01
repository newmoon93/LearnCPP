#include <iostream>
#include "study.h"

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}
void swapd(double &a, double &b) {
  double tmp = a;
  a = b;
  b = tmp;
}

int doodle_main(){
  int a = 20, b = 30;
  double da = 2.2222, db = 3.333;

  swap(a,b);
  swapd(da,db);
}