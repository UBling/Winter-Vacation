#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, j;
    float sum=1, total=0;

    printf("Enter the n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=1; j<=i; j++)
        {
            sum*=(float)j;
        }
        total+=1/sum;
    }
    printf("Result: %f", total);

    return 0;
}
