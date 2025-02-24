#include"queue.c"
#include"../Stacks/stack.c"
#include<ctype.h>


int main(){

    char s[256];
    Queue Q = queue(256); 
    Stack S = stack(256);

    printf("\nFrase? ");
    fgets(s, sizeof(s) , stdin);
   
    
    for(int i = 0 ; s[i] ; i++){
        if( isalpha(s[i])){
            s[i] = toupper(s[i]); 
            enqueue(s[i], Q);
            push(s[i] , S);
        }
    }

    while(!emptyq(Q) && dequeue(Q) == pop(S));
    if(emptyq(Q)) puts("Frase eh palindroma");
    else puts("Frase nao eh palindroma"); 

    destroyq(&Q);
    destroy(&S);


    return 0;
}