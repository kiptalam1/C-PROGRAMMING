#include <stdio.h>

# define MAX_LEN 100


void reverse_message(char c[], int n);

int main (void) {
  char c[MAX_LEN];
  int ch, counter = 0;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && counter < MAX_LEN - 1) {
      c[counter] = ch;
      counter++;
  }

  

  printf("In reverse: ");
  reverse_message(c, counter);

  return 0;
}

void reverse_message(char c[], int n) {
  for (int i = n-1; i >= 0; i--) {
    printf("%c", c[i]);
  }
  printf("\n");
}