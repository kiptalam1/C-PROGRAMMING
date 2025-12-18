// return day of the year int between 1 and 366;
#include <stdio.h>
#include <stdbool.h>

int day_of_year(int month, int day, int year);


int main (void) {
  int d, m, y;
  printf("Enter month-day-year: ");
  scanf("%d-%d-%d", &m, &d, &y);
  printf("Day is: %d\n", day_of_year(m,d,y));
  return 0;
}

int day_of_year (int month, int day, int year) {
  bool is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? true : false;
  int days_in_month[12] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
  };

  if (is_leap_year) {
    days_in_month[1] = 29;
  }
  int sum = 0;


  for (int i = 0; i < month - 1; i++){
    sum += days_in_month[i];
  }

  return sum + day;
}
