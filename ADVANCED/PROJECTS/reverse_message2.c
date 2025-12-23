#include <stdio.h>

# define MAX_LEN 100

void reverse_message(char c[], int n);

int main (void) {
  char c[MAX_LEN];
  int ch;
  char *p = c;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && p < c + (MAX_LEN - 1)) {
      *p = ch;
      p++;
  }

  int length = p - c;

  printf("In reverse: ");
  reverse_message(c, length);

  
  return 0;
}

void reverse_message(char c[], int n) {
  char *p;
  for (p = c + (n - 1); p >= c; p--)
  {
    printf("%c", *p);
  }
  printf("\n");
}