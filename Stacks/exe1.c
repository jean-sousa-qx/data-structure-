#include "stack.c"


int main(){

    int x, z; 
    printf("Insira a quantidade de numeros: ");
    scanf("%d", &x);
    Stack A = stack(x);
    Stack B = stack(x);

    puts("Insira os valores");
    scanf("%d", &z);
    push(z, A);

    for (int i = 0; i < x - 1 ; i++)
    {
        scanf("%d", &z);
        if (z > peek(A))
            push(z, A);
        else
        {
            while (!empty(A))
            {
                push(pop(A), B);
            }
            push(z, A);
          while (!empty(B))
            {
                push(pop(B), A);
            }
        }
    }

    for (int i = 0; i <  5; i++){
        while (!empty(A))
        {
            push(pop(A), B);
        }
        printf("%d ", pop(B));
    }

    printf("\n");

     return 0;
}