#include <stdio.h>
#include <stdlib.h> 

int add(int a, int b) {
  return a + b;
}

int mult(int a, int b) {
  return a * b;
}

int main() {

  printf("&add = %p\n", &add);
  printf("&mult = %p\n", &mult);


  // create function pointer;
  int (*pfn)(int, int) = &mult;
  printf("2 * 7 = %d\n", pfn(2, 7));

  return 0;
}