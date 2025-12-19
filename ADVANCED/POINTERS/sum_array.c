#include <stdio.h>

#define N 4

int main (void) {
  int a[N] = {11,34,82,3};
 int  sum, *p;
  sum = 0;

  for (p = &a[0]; p < &a[N]; p++) {
    sum += *p;
  }

  printf("Sum = %d\n", sum);
}