#include <stdio.h>
void main() 
{
    int num, temp, rem, rev, count = 1;
    while (count <= 3) 
	{
        printf("Enter number %d: ", count);
        scanf("%d", &num);
        temp = num;
        rev = 0;
        while (temp != 0) 
		{
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        if (num == rev)
            printf("%d is a Palindrome number.\n", num);
        else
            printf("%d is not a Palindrome number.\n", num);
       count++;
    }
}

