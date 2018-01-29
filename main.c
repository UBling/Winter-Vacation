#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define N (4.0f / 3.0f)

int main()
{
    float r = 10;
    printf("V = %.1f", PI*N*r*r*r);
    return 0;
}
