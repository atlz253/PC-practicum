#include <stdlib.h>

#include "matrix.h"

int **create()
{
    int **arr = (int**) malloc(sizeof(int*) * ROW);

    for (int i = 0; i < ROW; i++)
    {
        *(arr + i) = (int *) malloc(sizeof(int) * COLUMN);
        for (int j = 0; j < COLUMN; j++)
            arr[i][j] = rand() % 100 - 50;
    }
    
    return arr;
}