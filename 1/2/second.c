#include "io.h"
#include "invert.h"

#define N 20

int main()
{
    int *arr = iarr(N);
    
    print("Изначальный массив: ");
    parr(arr, N);
    
    invert(arr, N);

    print("Результат: ");
    parr(arr, N);

    return 0;
}