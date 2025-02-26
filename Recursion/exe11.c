#include<stdio.h>

int quo(int m, int n){
  
    if(m < n) return 0;
    return 1 + quo(m - n, n);

}


int main(){
     

    int a, b;

    printf("Insira dois numeros: ");
    scanf("%d" , &a);
    scanf("%d" , &b);

    printf("Resultado: de %d / %d = %d\n" , a, b, quo(a, b));




    return 0;
}