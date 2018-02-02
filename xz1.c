#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the v: ");
    scanf("%d", &n);

    if (n > 63)
        printf("Hurricane");
    else if (n > 48)
        printf("Strom");
    else if (n > 28)
        printf("Gale");
    else if (n > 4)
        printf("Breeze");
    else if (n > 1)
        printf("Light air");
    else printf("Calm");

    return 0;
}
