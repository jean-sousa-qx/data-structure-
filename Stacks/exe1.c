#include "stack.c"
#include <stdio.h>

int main() {
    int x, z;
    printf("Insira a quantidade de números: ");
    scanf("%d", &x);

    Stack A = stack(x);
    Stack B = stack(x); 

    puts("Insira os valores:");
    for (int i = 0; i < x; i++) {
        scanf("%d", &z);

        while (!empty(A) && peek(A) > z) {
            push(pop(A), B);
        }
        push(z, A);
        while (!empty(B)) {
            push(pop(B), A);
        }
    }

    while (!empty(A))
    {
        push(pop(A), B);
    }
    
    printf("Elementos ordenados em forma crescente: ");
    
    while(!empty(B))
        printf("%d ", pop(B));
    
    printf("\n");

    destroy(&A);
    destroy(&B);

    return 0;
}
