#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 200

int main()
{
    char a[N];
    char ch;
    int i, n, j;

    printf("Enter a sentence: ");
    gets(a);
    n=strlen(a);
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='.'||a[i]=='?'||a[i]=='!')
            ch=a[i];
    }
    printf("Reverse of sentence: ");
    for(i=n-2; i>=0; i--)
    {
        if(a[i]==' ')
        {
            for(j=i+1; j<n-1; j++)
            {
                printf("%c", a[j]);
            }
            printf(" ");
            n=i+1;
        }
        else if(i==0)
        {
            for(j=0; j<=n-2; j++)
            {
                 printf("%c", a[j]);
            }
        }
    }
    printf("%c", ch);

    return 0;
}
