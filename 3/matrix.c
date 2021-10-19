#include <stdlib.h>

#include "matrix.h"

void zsqr(int **arr)
{
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COLUMN; j++)
            if (arr[i][j] < 0)
                arr[i][j] = arr[i][j] * arr[i][j];
}

void print(int **arr)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
            printf("%d ", arr[i][j]);
        putchar('\n');
    }
}