#include <stdio.h>

int main() 
{
    int choice;
    float a, b, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("\nMenu:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) 
	{
        case 1: result = a+b;
                printf("Result = %f\n", result);
                break;
        case 2: result = a-b;
                printf("Result = %f\n", result);
                break;
        case 3: result = a*b;
                printf("Result = %f\n", result);
                break;
        case 4: if (b != 0)
                    result = a/b;
                else {
                    printf("Division by zero not allowed.\n");
                    return 0;
                }
                printf("Result = %f\n", result);
                break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}

