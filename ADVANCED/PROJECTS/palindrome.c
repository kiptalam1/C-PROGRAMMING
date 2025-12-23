#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LEN 100

bool is_palindrome(char arr[],  int n);

int main (void) {

  char array[MAX_LEN];
  int ch;
  int counter = 0;
  printf("Enter a message: ");
  while ((ch = getchar()) != '\n' && counter < MAX_LEN - 1) {
      array[counter] = (char) isalpha(tolower(ch));
      counter++;
  }

  if (is_palindrome(array, counter)) {
    printf("Palindrome\n");
  } else {
    printf("Not palindrome\n");
  }

  return 0;
}


bool is_palindrome(char arr[],  int n) {
  int left = 0;
  int right = n - 1;

  while (left < right) {
    if (arr[left] != arr[right]){
      return false;
    }
    left++;
    right--;
  }

  return true;
}
