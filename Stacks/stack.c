#include<stdio.h>
#include<stdlib.h>

typedef char Itemp;

typedef struct stack
{

    int max;
    int top;
    Itemp *item;

} *Stack;


Stack stack(int m){
    Stack S = malloc(sizeof(struct stack));
    S->max = m;
    S->top = -1;
    S->item = malloc(m * sizeof(Itemp));

    return S; 
}


int empty(Stack S){
    if(S->top == -1)
        return 1;
    else
        return 0; 
}

int full(Stack S){
    if(S->top == S->max-1)
        return 1;
    else
        return 0;
}

void push(Itemp x , Stack S){
    if(full(S)){
        puts("Stack Overflow!!");
        abort();
    }
    S->top++;
    S->item[S->top] = x;
}


Itemp pop(Stack S){
    if(empty(S)){
        puts("Stack Underflow!!");
        abort();
    }
    Itemp x = S->item[S->top];
    S->top--;
    return x; 
}


Itemp peek(Stack S){
    if(empty(S)){
        puts("Empty Stack");
        abort();
    }
    return S->item[S->top];
}


void destroy(Stack *S){
    free((*S)->item);
    free(*S);
    *S = NULL;
 }
