#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
// uint8_t StringEqual(char chuoi1, char chuoi2){

//     if (chuoi1[] == chuoi2[])
//         return 1;
//     else{
//         return 0;
//     }
// }
int main() {

   char mang1[10] ;     
   char mang2[10] ;
   printf("nhap mang1: ");
   gets(mang1);
   printf("nhap mang2: ");
   gets(mang2);
   // if(sizeof(mang1)==sizeof(mang2)){
      for(int i; i<=sizeof(mang1)-2; i++)
      {
         printf("%x\n",mang1[i]);
         printf("%x\n",mang2[i]);
         
         if(mang1[i] !=mang2[i]) {
            printf("Chuoi %s va chuoi %s khong giong nhau!\n", mang1, mang2);
            break;
         }

         if(mang1[i]=='\0') {
            if(mang2[i]=='\0') printf("Chuoi %s va chuoi %s giong nhau!!!\n", mang1, mang2);
            // else if(mang2[i]!='\0') printf("Chuoi %s va chuoi %s giong nhau!!!\n", mang1, mang2);
            break;
         } 
      }
   return 0;
}