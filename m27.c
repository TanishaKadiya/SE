#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Number entered is positive");
	}
	else if(a<0)
	{
		printf("Number entered is negative");
	}
	else if(a=0)
	{
		printf("Number entered is equal to zero ");
	}
	else
	{
		printf("Enter valid number");
	}
}
