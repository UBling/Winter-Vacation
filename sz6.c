#include <stdio.h>
#include <stdlib.h>
#define N 124

int main()
{
    int c[N]={0}, d[N]={0};
    char a[N], b[N];
    int i, j, sum1=0, sum2=0;

    printf("Enter first word: ");
    gets(a);
    printf("Enter second word: ");
    gets(b);
    for(i=0; a[i]!='\0'; i++)
    {
        c[(int)a[i]]++;
    }
    for(j=0; b[j]!='\0'; j++)
    {
        d[(int)b[j]]++;
    }
    for(i=96; i<N; i++)
    {
        if(c[i]!=d[i])
        {
            printf("The words are not anagrams.");
            return 0;
        }
    }
    printf("The words are anagrams.");
}
