#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main (void) {
  const double a[] = {3.2, 5.0, 7.7, 9.1};
  const double b[] = {12.4, 6.0, 76, 2.5};

  int n = sizeof(a) / sizeof(a[0]);
  double product = inner_product(a, b, n);

  printf("Double: %.2f\n", product);
  return 0;
}

double inner_product(const double *a, const double *b, int n)
{
  const double *p, *q;
  double sum = 0.0;
  for (p = a, q=b; p < a + n; p++, q++)
  {
      sum += *p * *q;
    
  }

  return sum;
}