#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
float func_atof(char const * _String){
    double val=0;
    int sign = 1;
    int flag_dec = 0;   
    int count_dec =0;
    
    for(int i=0;;i++){
        if(_String[i]!='\0')
        {
            if(_String[i]=='-')
            {
                sign= -1;
                i++;
            }
            if(_String[i]=='.')
            {
                flag_dec= 1;
                i++;
            }
            val = val*10 +(_String[i]-'0');
            if(flag_dec==1){
                count_dec--;
                printf("%d",count_dec);
            }
        }
        else break;
    }
    return sign * val* pow(10,count_dec);
}
int main(int argc, char const *argv[])
{
    char str[50];
    strcpy(str,"-1256.6");
    printf("invert: %f",func_atof(str));
    return 0;
    
}