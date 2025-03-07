#include<stdio.h>
#include<ctype.h>
#include<string.h>

#include"../Stacks/stack.c"

char *posfixa(char *e) {

    static char s[256];
    int j = 0; 
    Stack S = stack(256);

    for(int i = 0 ; e[i] ; i++)
        if(isdigit(e[i])) s[j++] = e[i];
        else if(strchr("+*-/", e[i])) push(e[i] , S); 
        else if(e[i] == ')') s[j++] = pop(S);

    s[j] = '\0';

    destroy(&S); 

    return s; 



}


int main(){

    
    char e[513];

    printf("Infixa? ");
    fgets(e, sizeof(e), stdin);
    printf("Posfixa: %s\n" , posfixa(e));


    return 0;
}