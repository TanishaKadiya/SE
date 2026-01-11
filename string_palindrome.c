#include<stdio.h>
void main()
{
	char str[10], revstr[10];
	int i,length;
	
	printf("Enter a string: ");
	scanf("%s",&str);
	
	length=strlen(str);
	
	for(i=0;i<length;i++)
	{
	revstr[i]=str[length-1-i];
	}

	if(strcmp(str,revstr)==0)
	{
		printf("String is palindrome!!");
	}
	else
	{
		printf("Entered string is not palindrome!!");
	}
}
