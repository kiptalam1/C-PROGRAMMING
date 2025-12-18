/*
5.
Modify Programming Project 17 from Chapter 8 so that it includes the following functions:
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
After obtaining the number n from the user, main will call create_magic_square,
passing it an n × n array that is declared inside main. create_magic_square will fill
the array with the numbers 1, 2, …, n2 as described in the original project. main will then
call print_magic_square, which will display the array in the format described in the
original project. Note: If your compiler doesn’t support variable-length arrays, declare the
array in main to be 99 × 99 instead of n × n and use the following prototypes instead:
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
*/
#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);


int main (void) {
  int size;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99\n");
  printf("Enter size of magic square: ");
  scanf("%d", &size);
  char magic_square[size][size];
  
  create_magic_square(size, magic_square);

  return 0;
}

void create_magic_square(int n, char magic_square[n][n]) {

  // initialize square;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      magic_square[i][j] = 0;
    }
  }

  int col = n / 2;
  int row = 0;

  // put 1 int first row middle column;

  magic_square[row][col] = 1;
  

  for (int num = 2; num <= n * n; num++) {
    int next_row = (row - 1 + n) % n;
    int next_col = (col + 1) % n;

    // it target cell is occupied, move down below 
    if (magic_square[next_row][next_col] != 0){
      row = (row + 1) % n;
    }
    else
    {
      // move to the right cell;
      row = next_row;
      col = next_col;
    }
    // place the number;
    magic_square[row][col] = num;
  }

    print_magic_square(n, magic_square);
}


void print_magic_square(int n, char magic_square[n][n]) {
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      printf("%d\t", magic_square[i][j]);
    }
  printf("\n");
  }
}
