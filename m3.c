#include<stdio.h>
main()
{
	float pi=3.14;
	int r;
	printf("Enter the radius of the circle :");
	scanf("%d",&r);
	printf("\nArea of the circle is :%f",pi*r*r);
	printf("\nCircumference of the circle is :%f",2*pi*r);
}
