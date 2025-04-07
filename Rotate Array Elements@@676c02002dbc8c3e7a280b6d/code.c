#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int x = k;
    for(int i = k;i < n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    for(int j = 0;j < k;j++){
        printf("%d",arr[j]);
        printf("\n");
    }
}