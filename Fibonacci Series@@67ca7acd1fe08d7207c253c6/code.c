#include<stdio.h>
int fibonacciSeries(int n){
    int n1 = 0;
    int n2 = 1;
    int sum = n1+n2;
    for(int i = 1;i <=n;i++){
        printf("%d",sum);
        n1 = n2;
        n2 = sum;
    }
}