// compute area of a triangle.
#include <stdio.h>

double triangle_area(double base, double height) 
{
  double product;
  product = base * height;
  return product / 2;
}

int main (void) {
  printf("Area of triangle is %g\n", triangle_area(12, 6));

  return 0;
}