#include"queue.c"
#include"../Stacks/stack.c"
#include<ctype.h>


int main(){

Queue Q = queue(5); 



for(int i = 0 ; i <= 3; i++)
        enqueue('A' + i , Q); 

    while (!emptyq(Q))
    {
        printf("%c\n" , dequeue(Q));
    }
   
    //Resposta: A B C D 
    
    destroyq(&Q); 

    return 0;
}