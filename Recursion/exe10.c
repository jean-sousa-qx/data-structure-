#include<stdio.h>

int prod(int a, int b){
    if(b==0){
        return 0;
    }
    if(b==1){
        return a;
    }
    return a + prod(a, b-1);
}

int main(){
     
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Product of %d and %d is %d\n", a, b, prod(a, b));




    return 0;
}