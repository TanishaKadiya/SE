#include <stdio.h>
int isPalindrome(int num) 
{
    int rev = 0, rem, temp;
    temp = num;
    for (; num != 0; num = num / 10) 
	{
        rem = num % 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev)
        return 1;
    else
        return 0;
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a Palindrome number.\n", num);
    else
        printf("%d is not a Palindrome number.\n", num);

    return 0;
}

