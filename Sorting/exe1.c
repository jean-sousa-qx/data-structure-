#include <stdio.h>
#include"sort.c"

void exibeRec(int *array, int tamanho) {
    if (array == NULL || tamanho <= 0) return;

    printf("%d  ", *array); 
    exibeRec(array + 1, tamanho - 1); 
}


int main(){

    int v[10] = {83,31,91,46,27,20,96,25,96,80};

    bsort(v, 10); 
    exibeRec(v , 10);

    return 0;
}