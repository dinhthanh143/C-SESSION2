#include<stdio.h>

int main(){
   int firstnumber = 20;
   
   int secondnumber = 30;
   
   int total = firstnumber + secondnumber;
   
   int minus = firstnumber - secondnumber;
   
   int multy = firstnumber * secondnumber;
   
   float divide = (float)firstnumber/secondnumber; 
   
   printf("tong la %d\n",total);
   
   printf("hieu la %d\n",minus);
   
   printf("tich la %d\n",multy);
   
   printf("thuong la %.2f",divide);
   
   
   
   return 0;
}

