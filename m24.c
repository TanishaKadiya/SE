#include<stdio.h>
void main()
{
	int a,b;
	char operat;
	printf("Enter any operator from (+, -, *, /): ");
	scanf("%c",&operat);
	printf("Enter a number 1: ");
	scanf("%d",&a);
	printf("Enter number 2: ");
	scanf("%d",&b);
	
	if(operat=='+')
	{
		printf("Addition of two numbers is: %d\n",a+b);
	}
	else if(operat=='-')
	{
		printf("Subtraction of two numbers is: %d\n",a-b);
	}	
	else if(operat== '*')
	{
		printf("Multiplication of two numbers is: %d\n",a*b);
	}
	else if(operat== '/')
	{
		printf("Division of two numbers is: %d\n",a/b);
	}
	else if(operat== '%')
	{
		printf("Modullo of two numbers is: %d\n",a%b);
	}
	else
	{
		printf("Enter valid operator");
	}
}
