#include <stdio.h>
#include <stdlib.h>

int main()
{
    float loan, rate, payment, mrate, o, tw, th;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest of rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("\n");

    mrate = (rate / 100.00f) / 12.00f;
    o = (loan - payment) + (loan - payment)*mrate;
    printf("Balance remaining after first payment: $%.2f\n",o);
    tw = (o - payment) + (o - payment)*mrate;
    printf("Balance remaining after first payment: $%.2f\n",tw);
    th = (tw - payment) + (tw - payment)*mrate;
    printf("Balance remaining after first payment: $%.2f\n",th);

    return 0;
}
