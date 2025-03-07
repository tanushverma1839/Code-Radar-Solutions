#include <stdio.h>

void checkCharacter(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if it's a letter
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a Vowel.\n", ch);
        } else {
            printf("%c is a Consonant.\n", ch);
        }
    } else if (ch >= '0' && ch <= '9') { // Check if it's a digit
        printf("%c is a Digit.\n", ch);
    } else { // Any other character is considered special
        printf("%c is a Special Character.\n", ch);
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    checkCharacter(ch);
    
    return 0;
}