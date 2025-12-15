// should return a[0] * b[0] + a[1] * b[1] + ... +a[n-1] * b[n-1];
#include <stdio.h>

double inner_product(double a[], double b[], int n);


int main(void) {
  #define LEN 5

  double a[LEN] = {2.4, 5.3, 7.6, 9.0, 1.3};
  double b[LEN] = {8.9, 4.1, 1.5, 6.0, 3.1};

  printf("Inner product: %g\n", inner_product(a, b, LEN));
}

double inner_product(double a[], double b[], int n)
{
  int i;
  double sum = 0.0;
  for (i = 0; i < n; i++){
      sum += a[i] * b[i];
  }

  return sum;
}