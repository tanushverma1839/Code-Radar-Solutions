#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int l = x-1;
    for(int i = 0;i < x;i++){
        printf(" ");
    }
    for(int j = 1;j <= x;j++){
        printf("%d",j);
    }
    for(int k = l;k > 0;k--){
        printf("%d",k);
    }
    printf("\n");
}