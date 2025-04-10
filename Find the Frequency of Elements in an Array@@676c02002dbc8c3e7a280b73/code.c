#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],freq[n] = {0},count[n] = {0};
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(arr[i] != freq[j]){
                freq[j] = arr[i];
            }
        }
    }
    int count2 = 0,x = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(freq[j] = arr[i]){
                count2++;
            }
        }
        count[x] = count2;
        count2 = 0;
    }
    for(int i = 0;i < n;i++){
        if(freq[i] == 0 || count[i]== 0){
            continue;
        }else{
            printf("%d %d",freq[i],count[n]);
        }
    }
}