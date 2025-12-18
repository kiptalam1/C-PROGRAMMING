#include <stdio.h>

int main (void)
{
  #define FRACTION (4.0f / 3.0f)
  #define PIE (22.0f / 7.0f)
  float volume, r = 10;
  volume = FRACTION * PIE * (r * r * r);

  printf("Volume : %f\n", volume);
}