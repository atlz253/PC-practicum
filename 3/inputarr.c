#include <stdlib.h>

#include "array.h"

int *create()
{
    int *arr = (int *)malloc(sizeof(int) * N);

    puts("array elements: ");

    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    return arr;
}