#include<stdio.h>
void main()
{
	int i,vowel=0,consonants=0;
	char str[10];
	
	printf("Enter the string: ");
	scanf("%s",str);
	
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]='a',str[i]='e',str[i]='i',str[i]='o',str[i]='u')
		vowel++;
	else
		consonants++;
}
	
	printf("Total number of vowels are: %d\n",vowel);
	printf("Total number of consonants are: %d\n",consonants);

	
}
