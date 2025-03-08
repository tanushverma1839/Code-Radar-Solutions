#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int j = 0;j < n - 1;j++ ){
            printf(" ");
        }
        for(int k = 0;k < n - 1;k++){
            printf("*");
        }
        printf("\n");
    }

}