#include <stdio.h>
#include <stdlib.h>

//delete d
int main()
{
    int m, w, i, d;

    printf("Enter number of days in month: ");
    scanf("%d", &m);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &w);

    d=w;
    for(i=1; i<=m; i++)
    {
        while(d-1)
        {
            printf("\t");
            d--;
        }
        printf("%d\t", i);
        if((i+w-1)%7==0)
        {
            printf("\n");
        }
    }

    return 0;
}
