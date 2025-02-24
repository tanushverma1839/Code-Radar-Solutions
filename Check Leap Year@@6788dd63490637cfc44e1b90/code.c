#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num % 4 ==0){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
}