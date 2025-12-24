/*
Modify Programming Project 14 from Chapter 8 so that it uses a pointer instead of an integer to keep track of the current position in the array that contains the sentence.
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100
int main(void)
{
  char sentence[MAX_LEN];
  char *p = sentence;
  char terminating_char = '\0';
  char ch;

  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n' && p < sentence + MAX_LEN - 1) {
    if (ch == '.' || ch == '?' || ch == '!') {
      terminating_char = ch;
      break;
    }
    *p++ = ch;
  }


  *p = '\0';

  printf("Reversal of sentence: ");

if (p > sentence) {
  char *end = p - 1; // last character.
  char *word_end = end;

  while (end >= sentence) {
    // skip trailing spaces if any;
    while (end >= sentence && *end == ' ')
    {
      end--;
      word_end--;
    }
    // find beginning of current word.
    while (end >= sentence && *end != ' ') {
      end--;
    }

    // print the word.
    // "end" now points to a space or before array.
    // so word starts at end + 1;
    char *word_start = end + 1;
    for (char *ptr = word_start; ptr <= word_end; ptr++) {
      putchar(*ptr);
    }
    //update word_end for next iteration.
    word_end = end;
    // print space between words;
    if (end >= sentence){
      putchar(' ');
    }
  }
}

// print terminating character if present;
if (terminating_char != '\0') {
  putchar(terminating_char);
}

printf("\n");

return 0;
  }