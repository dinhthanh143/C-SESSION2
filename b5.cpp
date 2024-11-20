#include<stdio.h>

int main(){
    int chieu_dai = 2;
    printf("chieu dai la %d cm\n",chieu_dai);
    int chieu_rong = 3;
    printf("chieu rong la %d cm\n",chieu_rong);
    
    int chu_vi = 2 * (chieu_dai+chieu_rong);
    
    printf("chu vi la %d\n",chu_vi);
    
    int dien_tich = chieu_dai * chieu_rong;
    printf("dien tich la %d",dien_tich);
   return 0;
}

