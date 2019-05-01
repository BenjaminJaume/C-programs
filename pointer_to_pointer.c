#include <stdio.h>
#include <stdlib.h>

int n1 = 5;
int n2 = 17;

int *pn1 = &n1;
int *pn2 = &n2;

int **ppn1 = &pn1;
int **ppn2 = &pn2;

void swap(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    printf("n1     = %d and n2     = %d\n\n", n1,     n2);
    printf("pn1    = %x and pn2    = %x\n",   pn1,    pn2);
    printf("*pn1   = %d and *pn2   = %d\n\n", *pn1,   *pn2);
    printf("ppn1   = %x and ppn2   = %x\n",   ppn1,   ppn2);
    printf("*ppn1  = %x and *ppn2  = %x\n",   *ppn1,  *ppn2);
    printf("**ppn1 = %d and **ppn2 = %d\n",   **ppn1, **ppn2);

    swap(ppn1, ppn2);

    printf("n1     = %d and n2     = %d\n\n", n1,     n2);
    printf("pn1    = %x and pn2    = %x\n",   pn1,    pn2);
    printf("*pn1   = %d and *pn2   = %d\n\n", *pn1,   *pn2);
    printf("ppn1   = %x and ppn2   = %x\n",   ppn1,   ppn2);
    printf("*ppn1  = %x and *ppn2  = %x\n",   *ppn1,  *ppn2);
    printf("**ppn1 = %d and **ppn2 = %d\n",   **ppn1, **ppn2);

    return 0;
}
