#include<stdio.h>
main()
{
	float fahrenhite,celsius;
	printf("Enter tempreture in farenhite: ");
	scanf("%1f",&fahrenhite);
	celsius=(fahrenhite-32)*5/9;
	printf("Tempreture in celsius is:%f",celsius);
}
