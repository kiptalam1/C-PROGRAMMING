#include <stdio.h>

void swap(int *p, int *q);

int main (void) {
  int i = 7;
  int j = 3;

  printf("i = %d, j = %d\n", i, j);

  swap(&i, &j);

  printf("i = %d, j = %d\n", i, j);

  return 0;
}

void swap(int *p, int *q) {
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}