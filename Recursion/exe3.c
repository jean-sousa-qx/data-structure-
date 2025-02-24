#include<stdio.h>


void cp (int n){

    if(n == 0) return;
    cp(n - 1); 
    printf("%d ", n);

}



void cr (int n){

    if(n == 0) return;
    printf("%d ", n);
    cr(n - 1); 

}


int main(){

    int numero; 
    printf("Insira o limite da contagem: ");
    scanf("%d", &numero);
    cp(numero);
    printf("\n");
    cr(numero);

    return 0;
}