#include <stdio.h>

int sum_array(const int* p, int n){
  int sum = 0;
  const int *ptr;

  for (ptr = p; ptr < (p + n); ptr++) {
    sum += *ptr;
  }

  return sum;
}

int main (void) {

  int a[] = {1, 2, 3, 4, 5};
  int b[] = {-10, 20, -30, 40};
  int c[] = {0};

  printf("Sum a: %d\n", sum_array(a, 5));
  printf("Sum b: %d\n", sum_array(b, 4));
  printf("Sum c: %d\n", sum_array(c, 1));
  printf("Sum a: %d\n", sum_array(a, 0));



  return 0;
}