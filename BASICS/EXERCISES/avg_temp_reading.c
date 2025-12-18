#include <stdio.h>

int main (void)
{
  float temp_readings[30][24];
  // float avg_per_day[30];
  float sum = 0;

  for (int i = 0; i < 30; i++) {
    for (int j = 0; j < 24; j++) {
      sum += temp_readings[i][j];
    }
  }

  float avg = sum / (30 * 24);

  printf("Average temperature readings for the month: %.2f\n", avg);

  return 0;
}