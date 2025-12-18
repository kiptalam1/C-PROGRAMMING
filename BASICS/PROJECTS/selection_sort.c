#include <stdio.h>

// 12 34 54 6 76 87 9 2 5 10
void selection_sort(int a[], int n);
void print_array(int a[], int n);


int main(void)
{
  int a[10] = {0};

  printf("Enter a series of integers: ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
  }

  printf("Old order -->: ");
  print_array(a, 10);

  selection_sort(a, 10);

  printf("New order -->: ");
  print_array(a, 10);

  return 0;
}

void print_array(int a[], int n) {
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
      printf(",");
    printf("%d", a[i]);
  }

  printf("\n");
}

void selection_sort(int a[], int n) {
  int largest_value = a[0];
  int largest_index = 0;

  if (n <= 1){
  return;

  }


  for (int i = 0; i < n; i++)
  {
    if (a[i] > largest_value){
      largest_value = a[i];
      largest_index = i;
    }
    
  }
  int temp_value = a[n - 1];
    a[n - 1] = largest_value;
    a[largest_index] = temp_value;
    print_array(a, n); // visualize here;

    selection_sort(a, n - 1);

}