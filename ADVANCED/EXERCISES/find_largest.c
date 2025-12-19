#include <stdio.h>

#define N 7

int *find_largest(int a[], int n);

int main (void) {
  int a[N] = {5,7,3,4,9,8,10};

  printf("Array: ");
  for (int i = 0; i < N; i++)
  {
    printf("%d ", a[i]);
  }

  int *largest_ptr = find_largest(a, N);

  if (largest_ptr != NULL) {
    printf("\nLargest value: %d\n", *largest_ptr);
    printf("Address of largest: %p\n", largest_ptr);
  } else {
    printf("\nArray is empty!");
  }

  return 0;
}

int *find_largest(int a[], int n) {
  if (n <= 0) {
    return NULL;
  }

  int *largest = &a[0];

  for (int i = 1; i < n; i++)
  {
    if (a[i] > *largest) {
      largest = &a[i];
    }
  }

  return largest;
}