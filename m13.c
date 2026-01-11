#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter the two numbers: ");
	printf("\na=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	temp=a; 	//using third variable
	a=b;
	b=temp;
	printf("After swapping of numbers : a=%d,b=%d",a,b);
	
	printf("\n___Without using third variable__\n");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping of numbers : a=%d, b=%d",a,b);
	
}
