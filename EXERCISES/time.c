// displays time in 12-hour form

#include <stdio.h>

int main (void)
{
  int hour, min;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hour, &min);

  switch (hour)
  {
  case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
    printf("Equivalent 12-hour time: %d:%.2d AM\n", hour, min);
    break;
  case 12: 
    printf("Equivalent 12-hour time: %d:%.2d PM\n", hour, min);
    break;
  default:
    printf("Equivalent 12-hour time: %d:%.2d PM\n", hour-12, min);
    
    break;
  }

}