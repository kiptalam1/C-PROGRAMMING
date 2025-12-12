#include <stdio.h>
#include <stdbool.h>

int main (void) {
  long n;
  int times[10] = {0};
  int digit;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    ++times[digit];
    n /= 10;
  }

  printf("Digit:\t\t");
  for (int i = 0; i < 10; i++){
    printf("  %d", i);
  }
  printf("\n");


  printf("Occurrences:\t");
  for (int i = 0; i < 10; i++){
    printf("  %d", times[i]);
  }
  printf("\n");

  return 0;
}