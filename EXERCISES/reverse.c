// reverse 2 digits entered by user;

#include <stdio.h>

int main (void)
{
#define TEN 10;
  int input, first, last;

  printf("Enter a two-digit number: ");
  scanf("%d", &input);

  last = input % TEN;
  first = input / TEN;



  printf("The reverse is: %d%d\n", last, first);
}