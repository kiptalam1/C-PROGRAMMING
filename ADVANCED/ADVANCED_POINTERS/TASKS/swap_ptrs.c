#include <stdio.h>

void swap_ptrs(int ** p, int** q) {
  int *temp;

  temp = *p;
  *p = *q;
  *q = temp;
}

int main (void) {

  int a = 10, b = 20;
  int *pa = &a;
  int *pb = &b;

  // swap_ptrs(&pa, &pb);

   printf("Task3 before: *pa=%d, *pb=%d\n", *pa, *pb);
  swap_ptrs(&pa, &pb);
  printf("Task3 after:  *pa=%d, *pb=%d\n", *pa, *pb);
  return 0;
}