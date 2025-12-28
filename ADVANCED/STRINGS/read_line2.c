#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 60

int read_line(char s[], int n);

int main(void){
  char string[LEN];
  printf("Enter a string: ");
  read_line(string, LEN);

  puts(string);

  return 0;
}

int read_line(char s[], int n)
{
  int ch, i = 0;
  while ((ch = getchar()) != EOF && isspace(ch))
    ;
  while (ch != EOF && ch != '\n' && i < n - 1)
  {
    s[i++] = ch;
    ch = getchar();
  }
  s[i] = '\0';
  return i;
}