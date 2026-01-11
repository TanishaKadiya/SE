#include<stdio.h>
void main()
{
	int maths,physics,chem,total,subtotal;
	printf("Input the marks obtained Physics :");
	scanf("%d",&physics);
	printf("Input the marks obtained Chemistry :");
	scanf("%d",&chem);
	printf("Input the marks obtained Mathematics :");
	scanf("%d",&maths);
	total=maths+physics+chem;
	subtotal=maths+physics;
	if(maths>=65)
	{
		if(physics>=55)
		{
			if(chem>=50)
			{
				if(total>=190 || subtotal>=140)
				{
					printf("Candidate is eligible for admission!!");
				}
			}
		}
	}
	else
	{
		printf("Candidate is not eligible for admission");
	}
}
