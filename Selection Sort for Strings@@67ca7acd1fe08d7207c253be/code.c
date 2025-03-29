#include <stdio.h>
int selectionSort(char[100] arr[], int n){
    for (int i = 0; i<n-1; i++){
        for (int j = 0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int printArray(char arr[], int n){
    for (int i = 0; i<n;i++){
        printf("%s ",arr[i]);
    }
}