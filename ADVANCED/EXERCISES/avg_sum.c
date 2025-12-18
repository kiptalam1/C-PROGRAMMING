#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int main (void) {
  double array[4] = {3.2, 5.4, 7.9, 8.0};
  double avg;
  double sum;

  avg_sum(array, 4, &avg, &sum);

  printf("Average: %.2f\n", avg);
  printf("Sum: %.2f\n", sum);

  return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum) {
  int i;
  *sum = 0.0;

  for (i = 0; i < n; i++) {
    *sum += a[i];
  }
  *avg = *sum / n;
}