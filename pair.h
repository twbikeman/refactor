int pair(int num, int a[]) {
  int i = 0;
  while(num != 0) {
    a[i] = num % 100;
    num = num / 100;
    i++;
  }
  return --i;
}
