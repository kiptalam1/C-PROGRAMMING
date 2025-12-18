#include <stdio.h>

int main (void)
{
  int x;
  printf("Enter number: ");
  scanf("%d", &x);

  float answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("Answer: %f\n", answer);
}