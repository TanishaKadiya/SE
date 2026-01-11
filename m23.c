#include<stdio.h>
void main()
{
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("It is a leap year!!");
	}
	else
	{
		printf("It is not a leap year!!");
	}
}
