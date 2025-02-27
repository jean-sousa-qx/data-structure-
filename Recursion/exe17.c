#include<stdio.h>

void inv(char *s , int p , int u){

    if(p >= u) return; 

    char aux = s[p];
    s[p] = s[u] ;
    s[u] = aux ;


    return inv(s , p + 1, u - 1);

}



int main(){

    char plvr[] = "teste";
    inv(plvr, 0, 4); 

    printf("%s\n", plvr);  

  return 0;
}