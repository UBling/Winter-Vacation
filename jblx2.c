#include <stdio.h>
#include <stdlib.h>

//three parts will have space
int main()
{
    char ch, ch1;

    printf("Enter a first and last name: ");
    ch=getchar();
    while(ch==' ')
    {
        ch=getchar();
    }
    ch1=ch;
    while(ch!='\n')
    {
        ch=getchar();
        while(ch==' ')
    {
        ch=getchar();
    }
        while (ch!='\n')
        {
            if(ch!=' ')
            {
                putchar(ch);
            }
            ch=getchar();
        }
    }
    putchar(',');
    printf(" ");
    putchar(ch1);
    putchar('.');

    return 0;
}
