#include <stdlib.h>

#include "matrix.h"

int **create()
{
    int **arr = (int**) malloc(sizeof(int*) * ROW);

    puts("matrix elements: ");

    for (int i = 0; i < ROW; i++)
    {
        *(arr + i) = (int *) malloc(sizeof(int) * COLUMN);
        for (int j = 0; j < COLUMN; j++)
            scanf("%d", &arr[i][j]);
    }
    
    return arr;
}