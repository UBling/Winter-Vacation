#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, d, e;

    printf("Enter a number between 0 and 32676: ");
    scanf("%d", &n);

    a = n % 8;
    b = (n / 8) % 8;
    c = (n / 8 /8) % 8;
    d = (n / 8 / 8 / 8) % 8;
    e = (n / 8 / 8 / 8 / 8) % 8;
    printf("In octal, your number is: %1d%1d%1d%1d%1d", e, d, c, b, a);

    return 0;
}
