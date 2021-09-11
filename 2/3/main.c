#include <stdlib.h>

#include "io.h"

int main()
{
    int num = 0;
    char *str = input();
    
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'B' && str[i + 3] == 'A')
            num++;
    
    print(num);

    free(str);

    return 0;
}
