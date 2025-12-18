// calculates greatest common divisor of m,n;
#include <stdio.h>

// if n is 0, stop => m contains gcd;
// get remainder of m % n
// copy n into m and copy remainder into n;

int gcd(int m, int n);


int main (void) {
  printf("Remainder is: %d\n", gcd(28, 12));
  return 0;
}

int gcd(int m, int n) {
  int remainder;
  for (;;)
  {
    if (n == 0)
      return m;
    remainder = m % n;
    m = n;
    n = remainder;
  }

  return m;
}
