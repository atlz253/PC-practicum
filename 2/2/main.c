#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
    int i = 0, l = 0, r = 0;
    char
        *str = (char *)malloc(sizeof(char) * N),
        *rslt = (char *)malloc(sizeof(char) * N);

    printf("Введите строку: ");
    fgets(str, N, stdin);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            if (l % 2 == 0)
                for (int j = i - l; j < i + 1; j++)
                    rslt[r++] = str[j];
            
            if (str[i] == '\n')
                break;

            l = 0;
        }
        else
        {
            l++;
        }

        i++;
    }
    rslt[++r] = '\0';

    printf("Исходная строка: ");
    puts(str);

    printf("Результат: ");
    puts(rslt);

    return 0;
}
