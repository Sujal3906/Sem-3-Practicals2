#include<stdio.h>

#define SIZE 5
int TOP = -1;

void display(int stack[]){
    if(TOP == -1){
        printf("Stack is empty\n");
        return;
    }
    printf("Stack :\n");
    for(int i = TOP; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}

void push(int stack[]){
    if(TOP < SIZE - 1){
        TOP += 1;
        int item;
        printf("Enter the element you want to insert : ");
        scanf("%d", &item);
        stack[TOP] = item;
        printf("Element pushed\n");
    }
    else{
        printf("Stack is full\n");
    }
}

void pop(int stack[]){
    if(TOP != -1){
        TOP -= 1;
        printf("Element poped\n");
    }
    else{
        printf("Stack is empty\n");
    }
}

int main(){
    int stack[SIZE];
    push(stack);
    push(stack);
    pop(stack);
    display(stack);
    return 0;
}