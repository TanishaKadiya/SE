#include<stdio.h>
main()
{
	int m;
	printf("Enter a number: ");
	scanf("%d",&m);
	if(m>0){
		printf("Value of n is 1");
	}
	else if(m<0){
		printf("\nValue of n is -1");
	}
	else if(m==0){
		printf("\nValue of n is 0");
	}
		else{
		printf("\nEnter valid number");
	}
}	
