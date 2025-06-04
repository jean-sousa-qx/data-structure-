#include"Binary.c"
#include<stdio.h>

int main(){

    Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
    exibe(I,0);

    return 0; 
}