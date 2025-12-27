#include <stdio.h>
#include <string.h>

int main (void) {
  char strcopy[10];
  char str1[10] = "hello";
  strcpy(strcopy, str1);

  char string1[10];
  char string2[10] = "good bye";

  strncpy(string1, string2, sizeof(string1) - 1);
  string1[sizeof(string1) - 1] = '\0';

  puts(str1);
  puts(strcopy);

  puts(string1);
  puts(string2);

  printf("size: %ld\nlen: %ld\n", sizeof(string1), strlen(string1));

  return 0;
}