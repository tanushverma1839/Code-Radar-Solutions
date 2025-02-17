#include<stdio.h>
int main(){
    int sum,num;

    scanf("%d",&num);
    for(int i = 1;i <= num;i++){
        sum += i;
    }
    printf("%d",sum);
}