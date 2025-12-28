#include <stdio.h>

int main (void) {

  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

  for (int i = 0; i < 9; i++) {
    if (planets[i][0] == 'M') {
      printf("%s begins with M\n", planets[i]);
    }
  }
    return 0;
}