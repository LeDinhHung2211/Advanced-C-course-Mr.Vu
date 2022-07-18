#include <stdio.h>
#include <stdint.h>
uint8_t mang[30];
uint8_t temp, max, min, lenght;

void arrayInput(){
    printf("Lenght of array: ");
    scanf("%d",&lenght);
    for(int i=0; i<lenght;i++)
    {
        printf("Phan tu %d : ",i+1);
        scanf("%d",&mang[i]);
    }
}
void tangDan(uint8_t mang[]){
    for(int i=0;i< lenght;i++){
        for(int j=0; j<lenght;j++)
        {
            if(mang[i]<mang[j])
            {
                temp= mang[i];
                mang[i]=mang[j];
                mang[j]=temp;
            }
        }
    }
    printf("\nIncreasing:\n");
    for(int i=0;i< lenght;i++){
        printf("%d  ",mang[i]);
    }  
}

void giamDan(uint8_t mang[]){
    for(int i=0;i< lenght;i++){
        for(int j=0; j<lenght;j++)
        {
            if(mang[i]>mang[j])
            {
                temp= mang[i];
                mang[i]=mang[j];
                mang[j]=temp;
            }
        }
    }
    printf("\nDecreasing:\n");
    for(int i=0;i< lenght;i++){
        printf("%d  ",mang[i]);
    }  
}

void maxValue(uint8_t mang[])
{
    max=mang[0];
    for(int i=0; i<lenght;i++)
    {
        if(max<mang[i]) max = mang[i];
    }
    printf("\nMax Value: %d",max);
}

void minValue(uint8_t mang[])
{
    min=mang[0];
    for(int i=0; i<lenght;i++)
    {
        if(min>mang[i]) min = mang[i];
    }        
    printf("\nMin Value: %d",min);

}


int main()
{
    // printf("%d", sizeof(mang));
    arrayInput();
    tangDan(mang);
    giamDan(mang);
    maxValue(mang);
    minValue(mang);
    return 0;
}

