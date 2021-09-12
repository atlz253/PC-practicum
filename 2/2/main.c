#include <stdio.h>
#include <stdlib.h>

#define N 100

char *input();
int print(char *str, char *msg);

int main()
{
    int i = 0, l = 0, r = 0;
    char
        *str = input(),
        *rslt = (char *)malloc(sizeof(char) * N);

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

    print(str, "Исходная строка: ");
    print(rslt, "Результат: ");

    free(str);
    free(rslt);

    return 0;
}

char *input()
{
    char *str = (char *)malloc(sizeof(char) * N);

    printf("Введите строку: ");
    fgets(str, N, stdin);

    return str;
}

int print(char *str, char *msg)
{
    printf(msg);
    puts(str);

    return 0;
}