#include <stdio.h>
#include <stdlib.h>

//%1d!!!
int main()
{
    int b, s, g, n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    b = n / 100;
    s = (n - b*100) / 10;
    g = n % 10;

    printf("The reversal is: %d\n", g*100 + s*10 + b);

    int x, y, z;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &x, &y, &z);

    printf("The reversal is: %1d%1d%1d", z, y, x);

    return 0;
}
