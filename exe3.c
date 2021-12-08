#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int vetor[5], i, p;
    for (i = 0; i <= 5; i++)
    {
        p = &vetor[i];
        if ((p % 2) == 0)
            printf("\tEndereco: %i\n", p);
    }
    return 0;
}
