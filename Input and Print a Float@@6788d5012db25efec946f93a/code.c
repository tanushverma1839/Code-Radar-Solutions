#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float x;
    
    scanf("%f",&x);
    printf("You entered: %.2f",x);
    return 0;
}