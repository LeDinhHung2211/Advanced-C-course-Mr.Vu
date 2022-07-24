#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

typedef struct List *Vertor;
Vertor Create(int value){
    Vertor temp;
    temp =(Vertor)malloc(sizeof(struct List));
    temp->next = NULL;
    temp->data = value;
    return temp;
}

Vertor Vertor_push_back(Vertor node, int value){
    Vertor temp, p;
    temp = Create(value);
    if (node == NULL){
        node = temp;
    }else
    {
        p = node;
        while (p->next != NULL)
        {
            p=p->next;
        }

        p->next = temp;
        
    }

    return node;
    
}

Vertor Input(){
    Vertor vt = NULL;
    int n, value;

    do
    {
        printf("Nhap so phan tu n=");
        scanf("%d", &n);
    } while (n<=0);

        for (int i = 0; i < n; i++)
        {
            printf("Nhap gia tri can them: ");
            scanf("%d", &value);
            vt = Vertor_push_back(vt, value);
        }

        
    return vt;
    
}



void Set(Vertor note, int index, int x){
    int i = 0;
    Vertor p = note;

    while (p->next != NULL && i != index)
    {
        i++;
        p= p->next;
    }
    p->data=x;
    
}
void Display(Vertor note){
    printf("\n");
    while (note!=NULL)
    {
        printf("%d ",note->data);
        note=note->next;

    }
    
}

int main(int argc, char const *argv[])
{
    int vitri, val_change;
    Vertor vt = Input();
    Display(vt);
    printf("nhap vi tri can doi: ");
    scanf("%d",&vitri-1);
    printf("nhap gia tri can doi: ");
    scanf("%d",&val_change);
    Set(vt,vitri,val_change);
    Display(vt);
 
    return 0;
}