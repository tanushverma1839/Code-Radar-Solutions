#include<stdio.h>
#include<ctype.h>
void chartype(char ch){
    if(isalpha(ch)){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else if(isdigit(ch)){
        printf("Digit");
    }else{
        printf("Special Character");
    }
}
int main(){
    char ch;
    scanf("%c",&ch);
    chartype(ch);
    return 0;
}