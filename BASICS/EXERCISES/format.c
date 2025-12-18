/*
Write a program that formats product information entered by the user.
*/

#include <stdio.h>

int main (void)
{
  int item_num, month, day, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_num);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy) : ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n%d\t$%7.2f\t%d/%d/%d\n", item_num, unit_price, month, day, year);
}