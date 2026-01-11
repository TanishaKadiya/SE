#include<stdio.h>
void main()
{
	int angle1, angle3,angle2,sum;
	printf("Enter First angle of triangle: ");
	scanf("%d",&angle1);
	printf("Enter Second angle of triangle: ");
	scanf("%d",&angle2);
	printf("Enter Third angle of triangle: ");
	scanf("%d",&angle3);
	sum = angle1+angle2+angle3;
	if(sum>=180)
	{
		printf("Triangle can be formed!!");
	}
	else
	{
		printf("Enter proper angle of triangles");
	}
}
