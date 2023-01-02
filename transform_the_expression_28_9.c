#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int top;
    int size;
    char * arr;
};

int isEmpty(struct Stack * stack1){
    if(stack1->top == 0){
        return 1;
    }
    return 0;
}

int isFull(struct Stack * stack1){
    if(stack1->top == stack1->size){
        return 1;
    }
    return 0;
}

void push(struct Stack * stack1, int value){
    if(!isFull(stack1)){
        stack1->arr[stack1->top] = value;
        stack1->top++;
    }
}

void pop(struct Stack * stack1){
    if(!isEmpty(stack1)){
        stack1->top--;
    }
}

int main(){
    
    int n;
    scanf("%d",&n);
    char * finalarr[100];
    for(int i = 0; i<n; i++){
        struct Stack *stack1;
        stack1->arr = (char *)malloc(100*sizeof(char));
        char ar[100];
        int j = 0;
        while(stack1->arr[j] != '\n'){
            scanf("%c",&ar[j]);
            j++;
        }
        for(int k = 0; k<j; k++){
            if(ar[k] == '('){
                
            }
        }
    }
    return 0;
}