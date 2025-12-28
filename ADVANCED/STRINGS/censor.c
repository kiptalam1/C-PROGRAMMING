#include <stdio.h>
#include <string.h>

#define MAX_LEN 30
void censor(char s[]);

int main(void) {
  char string[MAX_LEN];

  printf("Enter a string: ");
  fgets(string, MAX_LEN, stdin);

  censor(string);

  puts(string);

  return 0;
}

void censor (char s[])
{
  int i;
  for (i = 0; s[1] && s[i+1] && s[i+2]; i++) {
    if (s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'o') {
      s[i] = s[i+1] = s[i+2] = 'x';
    }
  }
}