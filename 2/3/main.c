#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
    int num = 0;
    char *str = (char *)malloc(sizeof(char) * N);
    
    printf("Введите строку: ");
    fgets(str, N, stdin);

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'B' && str[i + 3] == 'A')
            num++;
    
    printf("Количество подстрок ABBA: %d\n", num);

    return 0;
}
