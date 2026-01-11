#include<stdio.h>
void main()
{
	int n1,n2,n3;
	printf("Enter the number n1: ");
	scanf("%d",&n1);
	printf("Enter the number n2: ");
	scanf("%d",&n2);
	printf("Enter the number n3: ");
	scanf("%d",&n3);
	if(n1<n2)
	{
		if(n1<n3)
		{
			printf("Number n1, %d is minimum!!",n1);
		}
		else
		{
			printf("Number n3, %d is minimum!!\n",n3);
		}
	}
	else
	{
		if(n2<n3)
		{
			printf("Number n2, %d is minimum!!",n2);
		}
		else
		{
			printf("Number n3, %d is minimum!!",n3);
		}
	}
}
