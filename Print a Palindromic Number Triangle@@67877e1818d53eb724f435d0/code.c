#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int l = x-1;
    for(int i = 0;i < x;i++){
        for(int j = 0;j < x-i-1;j++){
            printf(" ");
        }
        for(int j = 1;j <= x;j++){
            printf("%d",j);
        }
        for(int j = l;j <= 1;j++){
            printf("*");
        }
        printf("\n");
    }
}