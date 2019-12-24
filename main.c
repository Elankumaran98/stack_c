#include <stdio.h>
#include <stdlib.h>

#define max 10
int stack[];
int top=-1;

void push(){
    int val;
    if(top==max){
        printf("stack is full");
    }
    else{
            printf("push a number:");scanf("%d",&val);
            top++;
            stack[top]=val;
    }
}


void peek(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("Last push element is:%d",stack[top]);
    }
}


void pop(){
    if(top==-1){
        printf("Stack is Empty");
    }
    else{
        printf("Pop element is:%d",stack[top]);
        top--;
    }
}

void display(){
    int j;
    if(top==-1){
        printf("stack is empty");
    }
    else{
        for(j=top;j>=0;j--){
            printf("\n%d",stack[j]);
        }
    }
}

void main(){
    int i,n;
    do{
        printf("1.PUSH\n2.PEEK\n3.POP\n4.DISPLAY\n5.EXIT\n");
        scanf("%d",&i);
        switch(i){
        case 1:
            push();
            break;
        case 2:
            peek();
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        }
        printf("\nDo U like continue -NO=[0]:");
        scanf("%d",&n);
    }
    while(n!=0);
}
