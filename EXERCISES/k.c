// returns Kth digit from right in number;
#include <stdio.h>

int digit(int n, int k);

int main (void) {
  int n, k;
  printf("Enter positive number: ");
  scanf("%d", &n);

  printf("Enter Kth position: ");
  scanf("%d", &k);

  int ans = digit(n, k);
  printf("%d is at position %d\n", ans, k);
}

int digit(int n, int k) {
  
  if (k <= 0) {
    return 0;
  }
  
    for (int i = 1; i < k ; i++) {
      n /= 10;

      if (n == 0) {
        return 0;
      }
    }

  return n % 10;
}
