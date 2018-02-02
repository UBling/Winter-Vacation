#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    switch(grade / 10){
        case 10:  if (grade == 100) printf("Letter grade: A");  else printf("Error");  break;
        case 9: printf("Letter grade: A");break;
        case 8: printf("Letter grade: B"); break;
        case 7: printf("Letter grade: C"); break;
        case 6: printf("Letter grade: D"); break;
        case 0:  if (grade == 0) printf("Letter grade: E");  else printf("Error");  break;
        case 1:  case 2:  case 3:  case 4:  case 5: printf("Letter grade: E"); break;
    }
    return 0;
}
