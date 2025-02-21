#include "stack.c"
#include<string.h>
#define MAX_SIZE 512


void balanceCheck(char *plvr); 


int main() {

    char plvr[MAX_SIZE] , *strRetorno;  
    Stack A = stack(MAX_SIZE); 
    int cont = 0 ; 

    printf("Insira uma string: ");
    fgets(plvr, sizeof(plvr), stdin);
    
    balanceCheck(plvr); 


    return 0;
    
}


void balanceCheck(char *str){
    Stack S = stack(MAX_SIZE);
    char *msgRetorno = malloc(MAX_SIZE * sizeof(char));

    if(msgRetorno == NULL){
        puts("Erro ao alocar memoria.");
        exit(1); 
    }

    for(int i = 0 ; str[i] != '\n' ; i++){
       
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'  )
            push(str[i] , S);
        if (str[i] == '}' && peek(S) == '{')
            pop(S);
        if (str[i] == ')' && peek(S) == '(')
            pop(S);
        if (str[i] == ']' && peek(S) == '[')
            pop(S);
    }

    if(empty(S))
        strcpy(msgRetorno, "Expressao Balanceada.");
    else    
        strcpy(msgRetorno, "Expressao nao balanceada.");

    puts(msgRetorno);
    
    destroy(&S); 

}