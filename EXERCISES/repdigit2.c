#include <stdio.h>
#include <stdbool.h>


int main (void)
{
  bool seen[10] = {false};
  bool repeated[10] = {false};
  long n;
  int digit;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0){
    digit = n % 10;
      if (seen[digit]){
        repeated[digit] = true;
      } else {
        seen[digit] = true;
      }
    
    n /= 10;
    }

  bool any = false;
  for (int i = 0; i < 10; i++) {
    
      if (repeated[i]){
        any = true;
        printf("%d\n", i);  
      }
    }
  
    if (!any)
      printf("No repeated digit\n");
  

  return 0;
  }