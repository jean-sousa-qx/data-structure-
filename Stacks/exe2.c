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
        int temp = pop(A); 
            if(!empty(A) && temp == peek(A))
                continue;
        
        printf("%d " , temp);
    }
    


    printf("\n");

    destroy(&A);
    destroy(&B);

    return 0;
    
}
