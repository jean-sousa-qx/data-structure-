#include<stdio.h>
#include<stdlib.h>
#define iterate(i) (i = (i + 1) % Q->max) 
    
typedef char Itemq;

typedef struct queue{ 

    int max; 
    int total;
    int start;
    int final;
    Itemq *item;


} *Queue; 


Queue queue(int m){

    Queue Q = malloc(sizeof(struct queue));
    Q->max = m;
    Q->total = 0;
    Q->start = 0;
    Q->final = 0;
    Q->item = malloc(m * sizeof(Itemq));

    
    return Q;

}


int emptyq(Queue Q){
    return (Q->total == 0);
}

int fullq(Queue Q){
    return (Q->total == Q->max); 
}


void enqueue(Itemq x , Queue Q){
    if(fullq(Q)){
        puts("Full Queue");
        abort(); 
    }

    Q->item[Q->final] = x;
    iterate(Q->final);
    Q->total++; 

}


Itemq dequeue(Queue Q){
    if(emptyq(Q)){
        puts("Empty queue!");
        abort();
    }

    Itemq x = Q->item[Q->start];
    iterate(Q->start);
    Q->total--;

    return x; 
}



void destroyq(Queue *Q){
    free((*Q) -> item);
    free(*Q);
    *Q == NULL; 
}