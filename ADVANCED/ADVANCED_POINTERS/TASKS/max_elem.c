#include <stdio.h>


int* max_element(int* a, int n) {
  int *ptr = a;
  int *max = a;

  for (; ptr < (a + n); ptr++) {
    if (*ptr > *max) {
      max = ptr;
    }
  }

  return max;
}

int main (void) {
  int a[] = {3, 9, 2, 9, 1};
  int b[] = {-5, -2, -100};
  int c[] = {42};

  int *p1 = max_element(a, 5);
  int *p2 = max_element(b, 3);
  int *p3 = max_element(c, 1);

  printf("Task2 Case1 expected value 9, got %d\n", *p1);
  printf("Task2 Case1 expected index 1 (first 9), got %ld\n", (long)(p1 - a));

  printf("Task2 Case2 expected value -2, got %d\n", *p2);
  printf("Task2 Case2 expected index 1, got %ld\n", (long)(p2 - b));

  printf("Task2 Case3 expected value 42, got %d\n", *p3);
  printf("Task2 Case3 expected index 0, got %ld\n", (long)(p3 - c));

  return 0;
}