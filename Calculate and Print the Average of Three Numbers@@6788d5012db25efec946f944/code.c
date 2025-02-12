#include <stdio.h>

int main() {
    int a, b, c;
    float average;

    // Taking input
    
    scanf("%d %d %d", &a, &b, &c);

    // Calculating average
    average = (a + b + c) / 3;

    // Printing the average
    printf("Average: %.2f\n", average);

    return 0;
}
