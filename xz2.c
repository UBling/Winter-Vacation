#include <stdio.h>
#include <stdlib.h>

//three if is ok
int main()
{
    int a, b, c, d, max1, max2, max, min1, min2 ,min;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max1 = a > b ? a : b;
    max2 = c > d ? c : d;
    printf("Largest: %d\n", max1 > max2 ? max1 : max2);
    min1 = a < b ? a : b;
    min2 = c < d ? c : d;
    printf("Smallest: %d", min1 < min2 ? min1 : min2);

    return 0;
}
