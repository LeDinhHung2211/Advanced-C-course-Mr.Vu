#include <stdio.h>
#include <stdint.h>
#define bool uint8_t
#define true 1
#define false 0
int top = -1;
bool IsFull(int capacity){
    if(top >= capacity -1){
        return true;
    } else{
        return false;
    }
}

bool IsEmpty(){
    if(top==-1){
        return true;
    } else{
        return false;
    }
}

void Push(int stack[], int value, int capacity){
    if(IsFull(capacity)==true){
        printf("\nStack is full. Overflow condition!");
    }else{
        ++top;
        stack[top]=value;
    }
}

void Pop(int stack[]){
    if(IsEmpty() == true){
        printf("\nStack is empty. Underflow condition!");
    }else{
        --top;
    }
}

int Top(int stack[]){
    return stack[top];
}

int Size(){
    return top+1;
}

int main()
{
    int capacity = 5;
    int stack[capacity];

    for(int i = 0; i< capacity; i++){
        Push(stack,2*i, capacity);
    }

    for(int i = 0; i< capacity; i++){
        printf("%d\n",Top(stack));
        Pop(stack);
    }

    for(int i = 0; i< capacity; i++){
        printf("%d\n",stack[i]);
    }

    return 0;

}