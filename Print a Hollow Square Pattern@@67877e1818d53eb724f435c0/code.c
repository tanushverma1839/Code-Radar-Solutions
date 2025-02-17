#include <stdio.h>
int main(){
   // int num = 1;
   // int count = 100;
   // while(num<=count){
   //    if (num%2==0){
   //       continue;
   //    }else{
   //       if(num/2==0 && num/3==0){
   //          continue;
   //       }else{
   //          printf(num);
   //       }
         
   //    }
   // num++;
   // }

   int num;
   scanf("%d",&num);
   for(int i = 1;i <= num;i++){
      if(i == 1 || i == num){
         for(int j = 1;j <= num;j++){
            printf("*");
         }
      }else{
         for(int k = 1;k<=num;k++){
            if(k == 1 || k == num){
               printf("*");
            }else{
               printf(" ");
            }
         }
      }
      printf("\n");
   }
   return 0;
}
