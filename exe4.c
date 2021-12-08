#include <stdio.h>
#include <stdlib.h>
void maior(int *vetor)
{
    int maior = 0, i, count = 1;
    for (i = 0; i <= 5; i++)
    {
        if (vetor[i] == maior)
        {
            count++;
        }
        else if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("O maior valor e de %i e aparece %i vezes", maior, count);
}
int main(void)
{
    int vetor[5], i;
    for (i = 0; i <= 5; i++)
    {
        scanf("%i", &vetor[i]);
    }
    maior(&vetor);

    return 0;
}
