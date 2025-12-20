#include <stdio.h>
#include <stdbool.h>


int main (void) {
  int a[5] = {1, 3, 5, 6, 8};
  int *p = a;

  // printf("p==a[0]: %s", p == a[0] ? "true" : "false"); wrong
  printf("p==&a[0]: %s\n", p == &a[0] ? "true" : "false");
  printf("*p==a[0]: %s\n", *p == a[0] ? "true" : "false");
  printf("p[0]==a[0]: %s\n", p[0] == a[0] ? "true" : "false");
  printf("p[0]: %d\n", p[0]);
  printf("p: %p\n", p);
  printf("a[0]: %d\n", a[0]);

  return 0;
}