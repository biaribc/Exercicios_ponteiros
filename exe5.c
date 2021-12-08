#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int vetor[5], i,*p;
    for (i = 0; i <= 5; i++)
    {
        scanf("%i", &vetor[i]);
        p=&vetor[i];
        *p=*p+1;

    }
      for (i = 0; i <= 5; i++)
    {
        printf("%i", vetor[i]);
    }
    return 0;
}
