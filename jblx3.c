#include <stdio.h>
#include <stdlib.h>

float arithmetic(float x, char ch, float y)
{
switch (ch) {
    case '+' : return (x+y); break;
    case '-' : return (x-y); break;
    case '*' : return (x*y); break;
    case '/' : return (x/y); break;
   }

}

int main()
{
    float a[20];
    float n=1;
    char ch='*';
    int i=0;

    printf("Enter an expression:");

    while (ch!='\n') {
        if (i==0)
            scanf("%f", &a[i]);
        else
        {
            scanf("%c", &ch);
            if(ch=='\n')
                break;
            scanf("%f", &a[i]);
        }

        n=arithmetic(n, ch, a[i]);

        i++;
    }

    printf("Value of expression:%.1f", n);

    return 0;

}
