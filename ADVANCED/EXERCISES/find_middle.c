#include <stdio.h>

int *find_middle(int *a, int n) {
  return a + ((n-1) / 2);
}

int main (void) {
  int a[] = {3, 6, 8, 9, 4, 5, 1, 2};

  printf("pointer: %p\n", find_middle(a, 8));
  printf("value: %d\n", *(find_middle(a, 8)));

  return 0;
}