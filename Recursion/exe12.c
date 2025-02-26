#include<stdio.h>

int resto(int m, int n){
  
    if(m < n) return m;
    return resto(m - n , n);
}


int main(){
    
    
    int a, b;
    printf("Insira os valores para calcular o resto entre eles: ");
    scanf("%d" , &a);
    scanf("%d" , &b);


    printf(" %d mod %d = %d\n" , a, b, resto(a,b));


    return 0;
}