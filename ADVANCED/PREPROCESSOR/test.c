#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(n) ((n)%(4))
#define PRODUCT(x,y) (((x)*(y) < 100) ? 1 : 0)

int main (void) {
  int cub = CUBE(3);
  printf("cube of x: %d\n", cub);
  int rem = REMAINDER(13);
  printf("remainder of n: %d\n", rem);

  int prod = PRODUCT(70, 5);
  printf("product of x,y is less than 100?: %d\n", prod);

  return 0;
}