#include <stdio.h>

#define N 7

void find_two_largest(int a[], int n, int *largest, int *second_largest);


int main (void) {
  int a[N] = {5,7,3,4,9,8,10};

  int largest, second_largest;

  find_two_largest(a, N, &largest, &second_largest);

  printf("Array: ");
  for (int i = 0; i < N; i++)
  {
    printf("%d ", a[i]);
  }

    printf("\nLargest: %d\nSecond largest: %d\n", largest, second_largest);
  return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
  if (n < 2) {
    *largest = a[0];
    *second_largest = a[0];
    return;
  }

  if (a[0] > a[1]) {
    *largest = a[0];
    *second_largest = a[1];
  } else {
    *largest = a[1];
    *second_largest = a[0];
  }

  for (int i = 2; i < n; i++)
  {
    if (a[i] > *largest) {
      *second_largest = *largest;
      *largest = a[i];
  } else if (a[i] > *second_largest && a[i] <= *largest) {
    *second_largest = a[i];
  }
}
}