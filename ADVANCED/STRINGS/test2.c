#include<stdio.h>

#define LEN 40
int main(void)
{
  int i, j;
  char s[LEN];

  scanf("%d%s%d", &i, s, &j);

  printf("i is %d\n", i);
  printf("array is ");
  puts(s);

  printf("j is %d\n", j);


  return 0;
}