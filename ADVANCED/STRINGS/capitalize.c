#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 60

int capitalize(char s[], int n);

int main(void){
  char string[LEN];
  printf("Enter a string: ");
  scanf("%s", string);
  capitalize(string, LEN);

  puts(string);

  return 0;
}

int capitalize(char s[], int n)
{
  int i;
  for (i=0;i<n;i++){
    s[i] = toupper(s[i]);
  }

  s[i] = '\0';
  return i;
}