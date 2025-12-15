#include <stdio.h>

double median(double x, double y, double z)
{
  if (x <= y)
    if (y <= z) return y;
    else if (x <= z) return z;
    else return x;
  if (z <= y) return y;
  if (x <= z) return x;
  return z;
}

int main (void) {
  printf("median: %g\n", median(3.4, 6.5, 8.9));
}