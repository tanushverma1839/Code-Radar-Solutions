#include<stdio.h>
int findUnsortedSubarray(int arr[], int n){
    int x = 0;
    for(int i = 0;i < n-1;i++){
        for(int j = 0;j < n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                x++;
            }else{break;}
        }
    }
    return x;
}