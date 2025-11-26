// Name: dweight.c
// Purpose: calculate dimensional weight of a package
// Author: Adams

#include <stdio.h>

int main (void)
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dX%dx%d\n", height, width, length);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Weight: %d\n", weight);
}