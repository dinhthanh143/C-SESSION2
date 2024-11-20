#include<stdio.h>

int main(){
  const float pi = 3.14;
  
  int bankinh = 4;
   printf("ban kinh hinh tron la %d\n", bankinh);
  
  float chuvi = 2*pi*bankinh;
  
  printf("chu vi hinh tron la %.2f\n", chuvi);
  
  float dientich = pi*(bankinh*bankinh);
  
  printf("dien tich hinh tron la %.2f", dientich);
  
  
  
   return 0;
}

