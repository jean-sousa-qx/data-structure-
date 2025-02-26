#include<stdio.h>

int sd(int n){
   
    if(n < 10) return n;
    return n % 10 + sd(n / 10);     

}


int main(){
    
    
    int a, b;
    printf("Insira os valores: ");
    scanf("%d" , &a);

    printf("%d \n" ,  sd(a)); 


    return 0;
}