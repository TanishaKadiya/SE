#include <stdio.h>

int main() {
    int minutes,seconds;
    float hours;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);
    seconds = minutes * 60;
    hours = minutes / 60.0;
    printf("%d minute is equal to %d second and %.2f hour\n", minutes, seconds, hours);
}

