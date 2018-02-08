#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, sum=0;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &a);
    sum=a;
    while(1)
    {
        scanf("%c", &ch);
        if(ch!='\n')
        {
            scanf("%f", &b);
            switch (ch)
        {
            case '+': sum+=b; break;
            case '-': sum-=b; break;
            case '*': sum*=b; break;
            case '/': sum/=b; break;
        }
        }
        else break;

    }
    printf("Value of expression: %.1f", sum);

    return 0;
}
