#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);
int operate(int a, int b, int (*op)(int, int));

int main (void) {
  int a = 4, b = 7;

  printf("multiply: %d\n", operate(a, b, multiply));
  printf("multiply address: %p\n", multiply);
  printf("multiply address &: %p\n", &multiply);


  printf("add: %d\n",operate(a, b, add));

  return 0;
}

int add(int a, int b) {
  return a + b;
}

int multiply(int a, int b) {
  return a * b;
}

int operate(int a, int b, int (*op)(int, int)) {
  return op(a, b);
}