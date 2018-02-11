#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 200

int main()
{
    char a[N];
    int n, i, j, len;

    printf("Enter a sentence: ");
    gets(a);
    n=strlen(a);
    len=n-1;
    printf("Reversal of sentence: ");
    for(i=len-1; i>=0; i--)
    {
        if(a[i]==' ')
        {
            for(j=i+1; j<len; j++)
            {
                printf("%c", a[j]);
            }
        printf(" ");
        len=i;
        }
        else if(i==0)
        {
            for(j=0; j<len; j++)
            {
                printf("%c", a[j]);
            }
        }
    }
    printf("%c", a[n-1]);

    return 0;
}
