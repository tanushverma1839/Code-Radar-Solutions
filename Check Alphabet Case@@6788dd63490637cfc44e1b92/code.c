#include <stdio.h>

int main() {
    char ch;

    // Input a character
    scanf("%c", &ch);

    // Check if it's uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else if(ch >= 'a' && ch <= 'z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }

    return 0;
}
