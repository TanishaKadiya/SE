#include<stdio.h>
void main()
{
	int i,count=0;
	char str[10];
	
	printf("Enter the string: ");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("Total number of characters are %d",count);
}
