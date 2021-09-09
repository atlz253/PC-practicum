#include <stdio.h>
#include <stdlib.h>

#include "io.h"

char *input()
{
    char *str = (char *)malloc(sizeof(char) * N);

    printf("Введите строку: ");
    fgets(str, N, stdin);

    return str;
}

void print(int num)
{
    printf("Количество подстрок ABBA: %d\n", num);
}