#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i=1;i <= num;i++){
        printf("%d",i);
        printf("\t");
    }
    return 0;
}