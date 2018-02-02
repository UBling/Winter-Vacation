#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, sum = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &h, &m);

    sum = h*60 + m;
    if (sum <= 531)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if (sum < 631)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if (sum == 631)
    {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if (sum < 723)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    else if (sum == 723)
    {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
        printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.");
    }
    else if (sum <= 803)
        printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.");
    else if (sum <= 922)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    else if (sum <= 1072)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    else if (sum <= 1222)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

    return 0;
}
