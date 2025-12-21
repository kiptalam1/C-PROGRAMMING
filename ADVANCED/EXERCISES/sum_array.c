#include <stdio.h>

int sum_array(const int a[], int n) 
{
  int sum = 0;
  const int *p;

  for (p = a; p < a + n; p++) {
    sum += *p;
  }

  return sum;
}

int main (void) {
  int a[5] = {2, 4, 7, 9, 1};

  int sum = sum_array(a, 5);

  printf("Sum: %d\n", sum);
  return 0;
}