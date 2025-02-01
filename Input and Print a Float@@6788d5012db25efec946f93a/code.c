#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    printf("");
    scanf("%c",&x);
    printf("You entered: %c",x);
    return 0;
}