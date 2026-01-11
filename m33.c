#include<stdio.h>
void main()
{
	int temp;
	printf("Enter the tempreture in centigrade :");
	scanf ("%d",&temp);
	if(temp<0)
	{
		printf("Freezing tempreture");
	}
	else if(temp>0 && temp<=10)
	{
		printf("Very cold!!");
	}
	else if(temp>10 && temp<=20)
	{
		printf("Cold!");
	}
	else if(temp>20 && temp<=30)
	{
		printf("Normal");
	}
	else if(temp>30 && temp<=40)
	{
		printf("Hot!!");
	}
	else if(temp>40 && temp<=50)
	{
		printf("Very hot!!");
	}
	else
	{
		printf("Enter proper tempreture");
	}
}
