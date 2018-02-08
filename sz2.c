#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 200

int main()
{
    char a[N];
    int i, len;

    printf("Enter message: ");
    gets(a);
    len=strlen(a);
    printf("In BIFF-speak: ")
    for(i=0; i<len; i++)
    {
        switch(toupper(a[i]))
        {
            case 'A':printf("%d", 4); break;
            case 'B':printf("%d", 8); break;
            case 'E':printf("%d", 3); break;
            case 'I':printf("%d", 1); break;
            case 'O':printf("%d", 0); break;
            case 'S':printf("%d", 5); break;
            default:printf("%c", toupper(a[i]));
        }
    }
    printf("!!!!!!!!!!");

    return 0;
}
