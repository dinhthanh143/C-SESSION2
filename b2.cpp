#include<stdio.h>

int main(){
   int first_number = 20;
   
   int second_number = 30;
   
   int total = first_number + second_number;
   
   int minus = first_number - second_number;
   
   int multy = first_number * second_number;
   
   float divide = (float)first_number/second_number; 
   
   printf("tong la %d\n",total);
   
   printf("hieu la %d\n",minus);
   
   printf("tich la %d\n",multy);
   
   printf("thuong la %.2f",divide);
   
   
   
   return 0;
}

