#include <stdio.h>

int main() {
    float x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    float sum=x+y+z;
    float avg=(sum)/3;
    printf("Average: %.2f",avg);   
    return 0;
}
