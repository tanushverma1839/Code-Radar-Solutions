#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%3 == 0){
        printf("31");
    }else if(x == 2){
        printf("28");
    }else if(x%2 == 30){
        printf("30");
    }else{
        printf("Invalid month");
    }
}