#include <stdio.h>
#include <math.h>

double compute_polynomial(double x);

int main (void) {
  double x;
  printf("Enter a number: ");
  scanf("%lf", &x);

  printf("Answer is: %.4f\n", compute_polynomial(x));

  return 0;
}

// 3x5 + 2x4 – 5x3 – x2 + 7x – 6;
double compute_polynomial(double x)
{
  // return (3 * pow(x, 5)) + (2 * pow(x, 4)) - (5 * pow(x, 3)) - (pow(x, 2)) + (7 * x) - 6;

  double x2 = x * x;
  double x3 = x2 * x;
  double x4 = x3 * x;
  double x5 = x4 * x;

  return (3 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;
}
