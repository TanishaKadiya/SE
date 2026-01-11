#include<stdio.h>
void main()
{
	int num, max=0, digit;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num>0)
	{
		digit=num%10;
		if(digit>max)
		{
			max=digit;
		}
		num=num/10;
	}
	printf("max digit is: %d\n",max);
}
