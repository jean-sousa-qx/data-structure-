#include<stdio.h>


float pot(float x , int n){

    if(n == 0) return 1; 
    return x * pot(x , n - 1); 

}





int main(){

    int n;
    float x;

    printf("Potencia: ");
    scanf("%f", &x); 
    scanf("%d", &n);
    
    printf("%f \n" , pot(x, n));


    return 0;
}