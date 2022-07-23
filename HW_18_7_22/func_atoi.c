#include <stdio.h>
#include <stdint.h>
#include <String.h>
int func_atoi(char const * _String){
    int val=0;
    int sign = 1;
    
    for(int i=0;;i++){
        if(_String[i]!='\0')
        {
            if(_String[i]=='-')
            {
                sign= -1;
                i++;
            }
            val = val*10 +(_String[i]-'0');
        }
        else break;
    }
    return sign * val;
}
int main(int argc, char const *argv[])
{
    char str[50];
    strcpy(str,"-123456");
    printf("invert: %d",func_atoi(str));
    return 0;
}