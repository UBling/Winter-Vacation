#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80

int main()
{
    char a[N];
    int n, i, le;

    printf("Enter message to be encrypted: ");
    gets(a);
    le=strlen(a);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    printf("Encrypted message: ");

    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            printf("%c", ((a[i]-'A')+n)%26+'A');
        }
        else if(a[i]>='a'&&a[i]<='z')
        {
             printf("%c", ((a[i]-'a')+n)%26+'a');
        }
        else
            printf("%c", a[i]);
    }

    return 0;
}
