#include<stdio.h>
void main()
{
	int n,last,first,sum;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	last=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	first=n;
	sum=last+first;
	printf("Sum of first and last digit is: %d",sum);
}
