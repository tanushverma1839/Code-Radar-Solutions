#include<stdio.h>
void fibonacciSeries(int n){
    int n1 = 0,n2 = 0,sum = n1+n2;
    for(int i = 0;i < n;i++){
        printf("%d",sum);
        n1 = n2;
        n2 = sum;
        sum = n1+n2;
    }
}