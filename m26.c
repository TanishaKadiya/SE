#include<stdio.h>
void main()
{
	char ch;
	printf("Enter Character: ");
	scanf("%c",&ch);
	if(ch== 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("Enetred Character is a vowel!");
	}
	else
	{
		printf("Entered Character is a consoant");
	}
}
