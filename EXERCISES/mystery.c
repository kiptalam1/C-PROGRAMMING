#include <stdio.h>

void pb(int n);

int main(void)
{
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n == 0)
        putchar('0');
    else
        pb(n);

    putchar('\n');
    return 0;
}

void pb(int n)
{
if (n != 0) {
pb(n / 2);
putchar('0' + n % 2);
}}