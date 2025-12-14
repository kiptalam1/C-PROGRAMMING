// num of digits in number;
#include <stdio.h>

int num_digits(long n);

int main (void) {
  long num;
  int ans;
  printf("Enter a positive number: ");
  scanf("%ld", &num);

  ans = num_digits(num);
  printf("%ld has %d digits\n", num, ans);


  return 0;
}


int num_digits (long n) {
  int digits = 0;
  if (n == 0)
    return 1;

  if (n < 0)
    n = -n;

  while (n > 0) {
    n /= 10;
    digits++;
    
  }

  return digits;
}
