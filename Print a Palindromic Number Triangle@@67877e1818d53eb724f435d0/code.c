#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i = 0;i < x;i++){
        for(int j = 0;j < x-i-1;j++){
            printf(" ");
        }
        for(int j = 1;j < i;j++){
            printf("%d",j+1);
        }
        for(int j = 0;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
}