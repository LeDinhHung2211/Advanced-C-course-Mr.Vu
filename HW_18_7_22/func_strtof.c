#include <stdio.h>
#include <stdint.h>
#include <String.h>
int val1=0;
int val2=0;
int val3=0;
int count=0;
void func_strtof(char const * _String){
    for(int i=0;;i++){
        if(_String[i]!='\0'){
            if(_String[i]==' '){
                i++;
                count++;
            }
            if(count ==0){
                if(_String[i]>=48 && _String[i]<=57){
                val1 = val1*10 +(_String[i]-'0');
            }
            }
            
            if(count==1){
                if(_String[i]>=48 && _String[i]<=57){
                val2 = val2*10 +(_String[i]-'0');
            }
            }

            if(count ==2){
                if(_String[i]>=48 && _String[i]<=57){
                val3 = val3*10 +(_String[i]-'0');
                }
            }
            
        }
        else break;
    }
}
int main(int argc, char const *argv[]){
    char str[50];
    strcpy(str,"123 hung 123");
    func_strtof(str);
    printf(" %d\n",val1);
    printf(" %d\n",val2);
    printf(" %d\n",val3);
    return 0;
}