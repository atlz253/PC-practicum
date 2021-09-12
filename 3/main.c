#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dlfcn.h>

int main()
{
    while (1)
    {
        int c;

        puts("1. работа с матрицей");
        puts("2. работа с массивом");
        puts("0. Выход");
        scanf("%d", &c);

        if (c == 1)
        {
            void *lib = dlopen("./libmatrix.so", RTLD_LAZY);
            int **(*create)() = dlsym(lib, "create");
            void (*print)(int**) = dlsym(lib, "print");
            void (*zsqr)(int**) = dlsym(lib, "zsqr");

            int **A = (*create)();

            puts("\nИсходная матрица");
            (*print)(A);

            (*zsqr)(A);

            puts("\nРезультат");
            (*print)(A);

            free(A);
            dlclose(lib);

            return 0;
        }
        else if (c == 2)
        {
            void *lib = dlopen("./libarray.so", RTLD_LAZY);
            int **(*create)() = dlsym(lib, "create");
            void (*print)(int*) = dlsym(lib, "print");
            void (*zsqr)(int*) = dlsym(lib, "zsqr");

            int *arr = create();

            puts("\nИсходный массив");
            (*print)(arr);

            (*zsqr)(arr);

            puts("\nРезультат");
            (*print)(arr);

            free(arr);
            dlclose(lib);

            return 0;
        }
        else if (c == 0)
        {
            return 0;
        }
        else
        {
            puts("Неверный пункт меню!");
        }
    }
}
