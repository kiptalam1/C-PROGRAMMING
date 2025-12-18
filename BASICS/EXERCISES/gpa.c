#include <stdio.h>

float compute_GPA(char grades[], int n);


int main (void) {
  #define LEN 5
  char grades[LEN] = {'A', 'B', 'C', 'D', 'F'};

  printf("Average: %f\n", compute_GPA(grades, LEN));


  return 0;
}

float compute_GPA(char grades[], int n) 
{
  int sum = 0.0f;

  for (int i = 0; i < n; i++) {
    switch (grades[i]) {
      case 'A': case 'a':
        sum += 4.0f;
        break;
      case 'B': case 'b':
        sum += 3.0f;
        break;
      case 'C': case 'c':
        sum += 2.0f;
        break;
      case 'D': case 'd':
        sum += 1.0f;
        break;
      case 'F': case 'f':
        sum += 0.0f;
        break;
      }
  }

  return sum / n;
}