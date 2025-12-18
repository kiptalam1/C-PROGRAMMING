/* Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd: */

#include <stdio.h>

int main(void)
{
  int date, month, year;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &date, &year);

  printf("You entered the date %d%d%d\a\n", year, month, date);
}