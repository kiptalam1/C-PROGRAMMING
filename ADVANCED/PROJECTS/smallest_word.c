#include <stdio.h>
#include <string.h>

#define LEN 20
#define NUM 10

int main (void) {
  char words[NUM][LEN];
  char smallest[LEN];
  char largest[LEN];
  int count;

  for (count = 0; count < NUM; count++)
  {
    printf("Enter word: ");
    fgets(words[count], LEN, stdin);
    words[count][strcspn(words[count], "\n")] = '\0';
    if (strlen(words[count]) == 4)
      break;
  }

 // Handle case when no valid words were entered
    if (count == 0) {
        printf("No words entered before the 4-letter sentinel.\n");
        return 0;
    }


  strcpy(smallest, words[0]);
  strcpy(largest, words[0]);

  for (int i = 1; i < count; i++) { 
    if (strcmp(words[i], smallest) < 0){
      strcpy(smallest, words[i]);
    } 
    if (strcmp(words[i], largest) > 0) {
      strcpy(largest, words[i]);
    }
  }
  printf("Smallest: %s\n", smallest);
  printf("Largest: %s\n", largest);

  return 0;
}