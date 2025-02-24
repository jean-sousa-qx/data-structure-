#include "stack.c"
#include<string.h>
#define MAX_SIZE 512


int main(){

    char original[] = "Oi meu chapa"; 

    char *copia = strdup(original);

    printf("%s \n" , original);
    printf("%s \n" , copia);
    free(copia);




}