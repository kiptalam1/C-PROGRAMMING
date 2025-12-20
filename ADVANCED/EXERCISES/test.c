#include <stdio.h>
#include <stdbool.h>

int main (void) {
  int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
  int *p = &a[1];
  int *q = &a[5];

  printf("*(p+3): %d\n", *(p + 3));
  printf("*(q-3): %d\n", *(q - 3));
  printf("q-p: %zu\n", q-p);
  printf("p<q: %s\n", p < q ? "true" : "false");
  printf("*p < *q: %s\n", *p < *q ? "true" : "false");

  // int *middle;
  int *low = &a[4];
  int *high = &a[7];

  int *middle = low + (high - low) / 2;

  printf("mid element: %d\n", *middle);

  return 0;
}