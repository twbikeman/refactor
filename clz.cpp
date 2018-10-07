#include <stdio.h>
#include <stdint.h>

int clz(uint32_t x) {
  int n =  32, c = 16;
  do {
    uint32_t y = x >> c;
    if(y) {n -= c; x = y;}
    c >>= 1;
  }while(c);
  return n - x; // ? n does not count the last x = 1

}
int main() {

  printf("%d\n", clz(32768));
  return 0;
}
