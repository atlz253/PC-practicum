#include <stdlib.h>

#include "array.h"

int *create()
{
    int *arr = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
        arr[i] = rand() % 100 - 50;

    return arr;
}