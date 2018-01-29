#include <stdio.h>
#include <stdlib.h>

//Horner's Rule
int main()
{
    int x, result;

    printf("Please input the x:\n");
    scanf("%d", &x);

    result = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("Result is : %d",result);

    return 0;
}
