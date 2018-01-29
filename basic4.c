#include <stdio.h>
#include <stdlib.h>

//pay
int main()
{
    int sum, a, b, c, d;

    printf("Enter a dollar amount: ");
    scanf("%d", &sum);

    a = sum / 20;
    printf("$20 bills: %d\n", a);

    b = (sum - a*20) / 10;
    printf("$10 bills: %d\n", b);

    c = (sum - a*20 - b*10) / 5;
    printf("$5 bills: %d\n", c);

    d = sum - a*20 - b*10 - c*5;
    printf("$1 bills: %d\n", d);

    return 0;
}
