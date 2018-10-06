#include "guess.h"
#include "pair.h"
#include <iostream>

TEST(test, mytest) {
  int a = 0;
  int b = 0;
  int c = 55;
  guess(a,b,c);
  ASSERT_EQ(a,7);

}

TEST(test, mytest2) {
  int digit[4];
  int num = pair(436,digit);
  int a = 0;
  int b = 0;
  guess(a, b, digit[1]);
  guess(a, b, digit[0]);

  std::cout << a;
}

int main(int argc, char ** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
