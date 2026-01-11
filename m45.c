#include <stdio.h>

int main()
 {
    int numbers[10];
    int i, evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i < 10; i++) 
	{
        if(numbers[i] % 2 == 0) 
		{
            evenCount++;
            evenSum += numbers[i];
        } else 
		{
            oddCount++;
            oddSum += numbers[i];
        }
    }
    printf("\nTotal Even Numbers: %d", evenCount);
    printf("\nTotal Odd Numbers: %d", oddCount);
    printf("\nSum of Even Numbers: %d", evenSum);
    printf("\nSum of Odd Numbers: %d\n", oddSum);
}

