// breaks down isbn entered by user

#include <stdio.h>

int main(void)
{
  int GSI, g_ident, pub_code, item_num, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &GSI, &g_ident, &pub_code, &item_num, &check_digit);

  printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", GSI, g_ident, pub_code, item_num, check_digit);
}