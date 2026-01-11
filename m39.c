#include <stdio.h>

void main()
{
    int week_num;
    printf("Enter week number: ");
    scanf("%d", &week_num);
    if (week_num == 1)
        printf("Monday\n");
    else if (week_num == 2)
        printf("Tuesday\n");
    else if (week_num == 3)
        printf("Wednesday\n");
    else if (week_num == 4)
        printf("Thursday\n");
    else if (week_num == 5)
        printf("Friday\n");
    else if (week_num == 6)
        printf("Saturday\n");
    else if (week_num == 7)
        printf("Sunday\n");
    else
        printf("Invalid input! Please enter a number between 1 and 7.\n");
}

