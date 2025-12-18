#include <stdio.h>

int main(void)
{
  #define TAX (5.0f / 100.0f)
  float money, total;
  printf("Enter dollars and cents: ");
  scanf("%f", &money);

  total = TAX * money + money;

  printf("With tax added: %.2f\n", total);
}