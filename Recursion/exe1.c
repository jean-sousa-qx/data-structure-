#include<stdio.h>
#include<limits.h>

int fatorial(int n){

    if(n == 0) return 1; 
    return n * fatorial (n - 1);

}



int main(){

    int n;

    
    printf("Numero: ");
    scanf("%d", &n);

    printf("Fatorial = %d \n", fatorial(n));




    return 0;
}