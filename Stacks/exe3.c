#include "stack.c"
#define MAX_SIZE 512

int main() {


    char plvr[MAX_SIZE] , c; 
    Stack A = stack(MAX_SIZE); 
    int cont = 0 ; 

    printf("Insira uma string: ");
    fgets(plvr, sizeof(plvr), stdin);

    while (plvr[cont] != '\n')
    {
        if(plvr[cont] != ' ')
        {
            push(plvr[cont], A);
        }
        else{
            push(' ', A);
            
            while(!empty(A)) 
                printf("%c", pop(A));

            push(' ', A);
        }
        cont++;
    }

    while(!empty(A))
        printf("%c", pop(A)); 



    printf("\n"); 
    destroy(&A);


    return 0;
    
}
