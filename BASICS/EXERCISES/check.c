// return 1 if both x and y fall between 0 and n-1.
#include <stdio.h>

int check(int x, int y, int n);
int main(void)
{
  printf("Check is: %d\n", check(2, 3, 8));
  return 0;
}

int check (int x, int y, int n) {
  if ((x >= 0 && x<= n-1) && (y >= 0 && y<= n-1)) {
    return 1;
  } else {
    return 0;
  }
}