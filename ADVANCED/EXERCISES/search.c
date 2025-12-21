#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);


int main (void) {
  int key = 1;
  int a[5] = {4, 5, 7, 3, 7};
  
  printf("%s\n", search(a, 5, key) ? "true" : "false");
  return 0;
}

bool search(const int a[], int n, int key) {
  const int *p;


  for (p = a; p < a + n; p++) {
    if (*p == key)
      return true;
  }

  return false;
}