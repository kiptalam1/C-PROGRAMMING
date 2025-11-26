#include <stdio.h>

int main (void)
{
  int x;
  printf("Enter number: ");
  scanf("%d", &x);

  float answer = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;

  printf("Answer: %f\n", answer);
}