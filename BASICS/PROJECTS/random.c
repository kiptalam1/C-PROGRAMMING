/*
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
main first calls generate_random_walk, which initializes the array to contain '.'
characters and then replaces some of these characters by the letters A through Z, as
described in the original project. main then calls print_array to display the array on
the screen.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char a[10][10]);
void print_array(char walk[10][10]);


int main (void) {
  char a[10][10];

  generate_random_walk(a);
  print_array(a);

  return 0;
}


void generate_random_walk(char a[10][10]) {
  srand((unsigned)time(NULL));
  char letter = 'A';
  int row = 0, col = 0;

  // initialize grid.
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10;j++){
      a[i][j] = '.';
    }
  }
  
  a[0][0] = letter;

  

  while (letter < 'Z') {
    int direction = rand() % 4;
    int next_row = row;
    int next_col = col;

    switch (direction)
      {
       case 0: next_row--; break; // up
      case 1: next_row++; break; // down
      case 2: next_col--; break; // left
      case 3: next_col++; break; // right
      }

      // validate move;
      if (next_row < 0 || next_row >= 10 || next_col < 0 || next_col >= 10 || a[next_row][next_col] != '.'){

        // try another direction;
        int blocked = 1;
        for (int d = 0; d < 4; d++) {
          int r = row, c = col;
          if (d == 0)
            r--;
          if (d == 1)
            r++;
          if (d == 2)
            c--;
          if (d == 3)
            c++;

          if (r >= 0 && r < 10 && c >= 0 && c < 10 && a[r][c] == '.') {
          blocked = 0;
          break;
        }
        }

        if (blocked)
          break;

        continue;
      }

      // commit move;
      row = next_row;
      col = next_col;
      a[row][col] = ++letter;
  }
  // print_array(a);
}

void print_array(char walk[10][10]) {
  for (int i = 0; i < 10;i++){
    for (int j = 0; j < 10;j++){
      printf("%c ", walk[i][j]);
    }
    printf("\n");
  }
}