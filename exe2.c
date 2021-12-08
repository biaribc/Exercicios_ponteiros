#include <stdio.h>
#include <stdlib.h>
void ordenar(int *a, int *b, int *c)
{
    if (*b < *a)
    {
        *a = *b;
        *b = *a;
    }
    if (*a > *c)
    {
        *a = *c;
        *c = *a;
    }
    if (*b > *c)
    {
        *c = *b;
        *b = *c;
    }
}
int main(void)
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    ordenar(&a, &b, &c);
    printf("maior: %i \nmenor %i", c, a);
    return 0;
}
