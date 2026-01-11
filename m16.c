#include<stdio.h>
main()
{
	int days,month,remaining;
	printf("Enter number of days: ");
	scanf("%d",&days);
	 month= days / 30;
    remaining= days % 30;
    printf("%d days is approximately %d month and %d day\n", days, month, remaining);

}
