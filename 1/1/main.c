#include <stdio.h>

int main()
{
    int N, i, j, k, count = 0;

    printf("Введите число N: ");
    scanf("%i", &N);

    for (i = 1; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 10; k++)
            {
                // printf("%i%i%i\n", i, j, k);
                // printf("%i\n", i + j + k);
                if ((i + j + k) == N)
                    count++;
            }
        }
    }

    printf("Трехзначных чисел, сумма цифр которых равна заданному числу N: %i\n", count);
    getchar();

    return 0;
}