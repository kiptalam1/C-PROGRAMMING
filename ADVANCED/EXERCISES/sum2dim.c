#include <stdio.h>

#define LEN 4

int sum_two_dimensional_array(const int a[][LEN], int n);


int main (void) {
  const int a[][4] = {{2, 4, 7, 9},
                {3, 5, 8, 1},
                {12,6,10, 3},                
                {30,57,82,17},                
              };

  int sum = sum_two_dimensional_array(a, 4);

  printf("sum: %d\n", sum);

  return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
int sum = 0;
const int *p;

p = &a[0][0]; // pointer to first element;
for (; p < &a[0][0] + n * LEN; p++)
{
  sum += *p;
}
  return sum;
}