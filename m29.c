#include<stdio.h>
void main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("Entered number is even");
	}
	else
	{
		printf("Entered number is odd");
	}
}
