#include<stdio.h>

int quad(int n){
    
    if(n == 0) return 0;    

    return (2 * n - 1) + quad(n - 1); 

}


int main(){
    
    
    int a, b;
    printf("Insira os valores: ");
    scanf("%d" , &a);


    printf("Quad = %d\n" ,  quad(a));


    return 0;
}