#include <gtest/gtest.h>

void  guess(int & a, int & b, int & c) {
  int term = b * 100 + c;
  int i;
  for (i = 9 ; i >= 0; i--)
    if (term - (2 * (a * 10 ) * i + i * i) >= 0 ) break;
  b = term - (2 * (a * 10 ) * i + i * i);
  a = a * 10 + i;

  return;
}
