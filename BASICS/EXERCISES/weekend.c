#include <stdbool.h>
#include <stdio.h>


int main (void) {
  bool weekend[7] = {[0] = true, [6] = true};

    printf("Weekend: \n");

  for (int i = 0; i < 7; i++){
    printf("%s\n", weekend[i] ? "true" : "false");
  }

}