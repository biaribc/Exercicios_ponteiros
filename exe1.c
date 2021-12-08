#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c, *pa, *pb, *pc;
    scanf("%i %i %i", &a, &b, &c);
    pa = &a;
    pb = &b;
    pc = &c;

    printf("%d %d %d", *pa, *pb, *pc);
    return 0;
}