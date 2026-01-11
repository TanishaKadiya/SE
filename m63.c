#include <stdio.h>

int Max(int arr[], int n) 
{
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) 
	{
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Maximum number = %d\n", Max(arr, n));
    return 0;
}

