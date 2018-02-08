#include <stdio.h>
#include <stdlib.h>
#define false 0
#define true 1
typedef int bool;   //!!

int main()
{
    bool num[10]={false};
    long n;
    int digit, i;

    printf("Enter a number: ");
    scanf("%ld", &n);
    while(n>0)
    {
        digit=n%10;
        if(num[digit])
            num[digit]++;
        else
            num[digit]=true;
        n/=10;

    }
    printf("Digit: ");
    for(i=0; i<10; i++)
    {
         printf("%3d", i);
    }
    printf("\n");
    printf("Occurrences: ");
    for(i=0; i<10; i++)
    {
        printf("%3d", num[i]);
    }

    return 0;
}
