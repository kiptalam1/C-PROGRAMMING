#include <stdio.h>
#include <string.h>

char *duplicate(const char *p)
{
  char *q;
  strcpy(q, p);
  return q;
}

int main (void) {
  char s[10];
  printf("Enter a string: ");
  fgets(s, 10, stdin);

  printf("Original: ");
  puts(s);

  printf("duplicate: %s\n", duplicate(s));
}