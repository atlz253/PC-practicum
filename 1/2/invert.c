#include "invert.h"

void invert(int *arr, int n)
{
    int tmp;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        tmp = *(arr + j);
        *(arr + j) = *(arr + i);
        *(arr + i) = tmp;
    }
}