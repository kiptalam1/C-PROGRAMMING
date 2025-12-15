/*
Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
amount of income tax. When passed an amount of taxable income, the function will return
the tax due.
*/
#include <stdio.h>


float income_tax(float amount);

int main (void) {
  float amount;

  printf("Enter amount of taxable income: ");
  scanf("%f", &amount);

  printf("Tax due: $%.2f\n", income_tax(amount));

  return 0;
}

float income_tax(float amount){

  float tax;

  if (amount <= 750){
    tax = 0.01 * amount;
  } else if (amount <= 2250){
    tax = 7.50 + (0.02 * (amount - 750));
  } else if (amount <= 3750) {
    tax = 37.50 + (0.03 * (amount - 2250));
  } else if (amount <= 5250) {
    tax = 82.50 + (0.04 * (amount - 3750));
  } else if (amount <= 7000) {
    tax = 142.50 + (0.05 * (amount - 5250));
  } else {
    tax = 230.00 + (0.06 * (amount - 7000));
  }

  return tax;
}