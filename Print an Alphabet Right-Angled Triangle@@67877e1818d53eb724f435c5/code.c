#include<stdio.h>
int main(){
    char x = 'A';
    int n;
    scanf("%d",&n);
    for(int j = 1;j <= n;j++){
        for(int i = 1;i <= j;i++){
            printf("%c ",x);
            x++;
        }
        x = 'A';
        printf("\n");
    }
}