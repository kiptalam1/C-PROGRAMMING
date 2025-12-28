#include<stdio.h>

int main (void) {
  char *p = "abc";

  // putchar(p); // p is of type char *
  putchar(*p);
  // printf("%d\n", *p);
  printf("\n");
  puts(p);
  puts(*p);

  return 0;
}