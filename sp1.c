#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, d, y;
    float p;

    printf("Enter item number: ");
    scanf("%d", &n);
    printf("Enter unit price: ");
    scanf("%f", &p);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item\tUnit\tPurchase\t\n\tPrice\tDate\n");
    printf("%d\t$%4.2f\t%d/%d/%d", n, p, m, d, y);

    return 0;
}
