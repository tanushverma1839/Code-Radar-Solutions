#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k = k%n;
    for(int i = k-1;i < n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    for(int j = 0;j < k;j++){
        printf("%d",arr[j]);
        printf("\n");
    }
}