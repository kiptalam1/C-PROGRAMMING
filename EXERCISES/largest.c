// return largest element in array a;
// average of all elements in a;
// number of + elements in a;
#include <stdio.h>
// #define LEN sizeof(a) / sizeof(a[0])
#define LEN 10

int largest(int a[], int n);
int average(int a[], int n);
int positive_elements(int a[], int n);


int main (void) {
int a[LEN] = {3, 34, 75, 87, 43, 2, 6, -9, 23, 52};
  
  int l = largest(a, LEN);
  int avg = average(a, LEN);
  int num_of_positive = positive_elements(a, LEN);


  printf("Largest element in a is: %d\n", l);
  printf("Average of all elements in a: %d\n", avg);
  printf("Number of + elements in a: %d \n", num_of_positive);
}

int largest(int a[], int n) {
  int large = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > large)
      large = a[i];
  }

  return large;
}


int average(int a[], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  return sum / n;
}

int positive_elements(int a[], int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      count++;
    }
  }

  return count;
}