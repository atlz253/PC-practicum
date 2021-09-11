#include "insert.h"

#include <stdlib.h>

int *insert(int *arr, int *n)
{
    char p = 0;

    for (int i = 0; i < *n; i++)
    {
        if (*(arr + i) > 0)
            if (p == 1)
            {
                *n += 1;
                int *rarr = (int *) malloc(*n * sizeof(int));

                for (int j = 0; j < *n; j++)
                {
                    if (j <= i)
                        *(rarr + j) = *(arr + j);
                    else if (j == i + 1)
                        *(rarr + j) = 100;
                    else
                        *(rarr + j) = *(arr + j - 1);
                         
                }

                free(arr); 
                return rarr;
            }
            else
            {
                p++;
            }
    }

    return arr;
}