// checks whether file can open.
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
  FILE *fp;

  if (argc != 2){
    printf("usage: canopen <filename>\n");
    exit(EXIT_FAILURE);
  }

  if ((fp = fopen(argv[1], "r")) == NULL) {
    printf("%s Can't be  opened.\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  printf("Can open %s\n", argv[1]);

  return 0;
}