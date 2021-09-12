#include <stdlib.h>

#include "array.h"

int *create()
{
    int *arr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        arr[i] = rand() % 100 - 50;

    return arr;
}

void zsqr(int *arr)
{
    for (int i = 0; i < N; i++)
            if (arr[i] < 0)
                arr[i] = arr[i] * arr[i];
}

void print(int *arr)
{
    for (int i = 0; i < N; i++)
            printf("%d ", arr[i]);
}