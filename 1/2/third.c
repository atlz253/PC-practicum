#include "io.h"
#include "insert.h"

int main()
{
    int n = 15;
    int *arr = iarr(n);
    
    print("Изначальный массив: ");
    parr(arr, n);
    
    arr = insert(arr, &n);

    print("Результат: ");
    parr(arr, n);

    return 0;
}
