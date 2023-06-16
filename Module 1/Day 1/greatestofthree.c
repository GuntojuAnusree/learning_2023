#include <stdio.h>

int greatestofthree(int a, int b, int c) {
  if (a > b && a > c) {
    return a;
  } else if (b > a && b > c) {
    return b;
  } else {
    return c;
  }
}

int main() {
  int a = 10,b = 4, c = 2;

  int greatest = greatestofthree(a, b, c);
  printf("The greatest number is: %d\n", greatest);

  return 0;
}
