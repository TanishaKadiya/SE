#include <stdio.h>
int main() 
{
    float kilometers, meters;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    meters = kilometers * 1000;
    printf("%.2f kilometer = %.2f meter\n", kilometers, meters);
}

