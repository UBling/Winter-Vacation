#include <stdio.h>
#include <stdlib.h>

// GCD Euclid
int main()
{
    int m, n, x, y, z;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    if (m==0||n==0)
    {
        printf("Great common divisor: 0");
        return 0;
    }

    if(m > n)
    {
        x = m;
        y = n;
    }
    else
    {
        x = n;
        y = m;
    }

    while (y)
    {
        z = x % y;
        x = y;
        y = z;
    }
    printf("Great common divisor: %d", x);

    return 0;
}
