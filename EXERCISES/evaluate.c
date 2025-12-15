#include <stdio.h>

int evaluate_position(char board[8][8]);

int main (void) {
  char board[8][8] = {
    {'r','n','b','q','k','b','n','r'},
    {'p','p','p','p','p','p','p','p'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'.','.','.','.','.','.','.','.'},
    {'P','P','P','P','P','P','P','P'},
    {'R','N','B','Q','K','B','N','R'}
};

  for (int i = 0; i < 8;i++){
    for (int j = 0; j < 8;j++) {
      printf("%c ", board[i][j]);
    }
    printf("\n");
  }
    printf("Difference: %d\n", evaluate_position(board));
  return 0;
}

int evaluate_position(char board[8][8])
{
  int score = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            switch (board[i][j]) {
                /* White pieces */
                case 'Q': score += 9; break;
                case 'R': score += 5; break;
                case 'B': score += 3; break;
                case 'N': score += 3; break;
                case 'P': score += 1; break;

                /* Black pieces */
                case 'q': score -= 9; break;
                case 'r': score -= 5; break;
                case 'b': score -= 3; break;
                case 'n': score -= 3; break;
                case 'p': score -= 1; break;

                /* Kings and empty squares */
                default: break;
            }
        }
    }

    return score;
}