#include <stdlib.h>

#include "array.h"

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