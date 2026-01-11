#include<stdio.h>
main()
{
	int years,months,days;
	printf("Enter number of years:");
	scanf("%d",&years);
	months=years*12;
	days=years*365;
	printf("%d year is equal to %d month and %d day.\n",years,months,days);
}
