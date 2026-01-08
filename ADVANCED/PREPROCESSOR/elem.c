#include <stdio.h>

#define NELEMS(a) ((int) ((sizeof(a) / sizeof(a[0]))))
int main (void) {
  int a[] = {1, 3, 4, 5, 6, 4, 2};
  int n = NELEMS(a);

  printf("num of elems: %d\n", n);

  return 0;
}