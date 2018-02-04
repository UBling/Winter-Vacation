#include <stdio.h>
#include <stdlib.h>


//%g
int main()
{
    double n, max;

    printf("Enter a number: ");
    scanf("%lf", &n);
    max = n;

    while (n > 0)
    {
        printf("Enter a number: ");
        scanf("%lf", &n);
        if (n > max)
            max = n;
    }
    printf("The largest number entered was %g", max);

    return 0;
}
