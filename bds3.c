#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, b1, a2, b2, a3, b3, a4, b4, a5, b5, a6, b6, sum1, sum2, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a1, &b1, &a2, &b2, &a3, &b3, &a4, &b4, &a5, &b5, &a6, &b6);

    sum1 = b1 + b2 + b3 + b4 + b5;
    sum2 = a1 + a2 + a3 + a4 + a5;
    total = sum1*3 + sum2 - 1;

    printf("Check digit: %d", 9 - total % 10);

    return 0;
}
