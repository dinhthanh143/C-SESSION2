#include<stdio.h>

int main(){
  const float pi = 3.14;
  
  int ban_kinh = 4;
   printf("ban kinh hinh tron la %d\n", ban_kinh);
  
  float chu_vi = 2*pi*ban_kinh;
  
  printf("chu vi hinh tron la %.2f\n", chu_vi);
  
  float dien_tich = pi*(ban_kinh*ban_kinh);
  
  printf("dien tich hinh tron la %.2f", dien_tich);
  
  
  
   return 0;
}

