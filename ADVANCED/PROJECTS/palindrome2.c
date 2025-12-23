#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LEN 100

bool is_palindrome(char arr[],  int n);

int main (void) {

  char array[MAX_LEN];
  int ch;
  char *p = array;
  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && p < array + (MAX_LEN - 1)) {
    if (isalpha(ch)) {
      *p++ = tolower(ch);
    }
      
  }

  int len = p - array;
  if (is_palindrome(array, len))
  {
    printf("Palindrome\n");
  }
  else
  {
    printf("Not palindrome\n");
  }

  return 0;
}


bool is_palindrome(char arr[],  int n) {
  char *start = arr;
  char *end = arr + n - 1;

  while (start < end)
  {
    if (*start != *end){
      return false;
    }
    start++;
    end--;
  }

  return true;
}
