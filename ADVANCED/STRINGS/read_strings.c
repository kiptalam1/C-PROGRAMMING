#include <stdio.h>
#include <stdlib.h>


#define SENT_LEN 80

int main (void) {
  char sentence1[SENT_LEN + 1];
  // char sentence2 [SENT_LEN + 1];

  printf("Enter a sentence: ");
  scanf("%s", sentence1);


  printf("%s\n", sentence1);
  // printf("%s\n", sentence2);
  
  

  return 0;
}