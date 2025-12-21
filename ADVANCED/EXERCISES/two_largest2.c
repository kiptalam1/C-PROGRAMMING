#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);


int main (void) {
  const int a[] = {5,7,3,4,9,42,8,10};
  int n = sizeof(a) / sizeof(a[0]);
  int largest, second_largest;

  find_two_largest(a, n, &largest, &second_largest);

  printf("largest: %d\n", largest);
  printf("second largest: %d\n", second_largest);
  return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
  const int *p;

  if (n <= 0)
    return;

  *largest = *a;
  *second_largest = *a;

  for (p = a + 1; p < a + n; p++) {
    if (*p > *largest ){
      *second_largest = *largest;
      *largest = *p;
    } else if (*p > *second_largest) {
      *second_largest = *p;
    }
  }
}