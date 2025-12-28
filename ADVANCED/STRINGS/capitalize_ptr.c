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
  char *ptr;
  for (ptr = s; ptr < s + n; ptr++){
    *ptr = toupper(*ptr);
  }
  *ptr = '\0';
  
  return ptr - s;
}