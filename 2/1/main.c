#include <stdio.h>

int main()
{
    int num;

    printf("Введите число: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            for (int j = 0; num % i == 0; j++)
            {
                printf("%d*", i);
                num /= i;
            }
        }
    }
    printf("%d\n", num);

    return 0;
}