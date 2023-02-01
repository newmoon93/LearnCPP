#include <iostream>
#include "study.h"

using namespace std;

int study_73p(void)
{
  int num = 12;
  int *ptr = &num;
  int **dptr = &ptr;

  int &ref = num;
  int *(&pref) = ptr;
  int **(&dpref) = dptr;

  cout << ref << endl;
  cout << *pref << endl;
  cout << **dpref << endl;

  return 0;
}