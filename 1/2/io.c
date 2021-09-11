#include "io.h"

#include <stdio.h>
#include <stdlib.h>

int *iarr(int n);
void print(char *c);
void parr(int *arr, int n);

int *iarr(int n)
{
    int *arr;

    arr = (int*) malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        print("Введите элемент массива: ");
        scanf("%i", arr + i);
    }
    
    return arr;
}

void print(char *c)
{
    printf(c);
}

void parr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", *(arr + i));
    }
    putchar('\n');
}