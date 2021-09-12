#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    while (1)
    {
        int c;

        puts("1. ������ � ��������");
        puts("2. ������ � ��������");
        puts("0. �����");
        scanf("%d", &c);

        if (c == 1)
        {
            void *lib = LoadLibrary("libmatrix.so");
            int **(*create)() = GetProcAddress((HINSTANCE)lib, "create");
            void (*print)(int**) = GetProcAddress((HINSTANCE)lib, "print");
            void (*zsqr)(int**) = GetProcAddress((HINSTANCE)lib, "zsqr");

            int **A = (*create)();

            puts("\n�������� �������");
            (*print)(A);

            (*zsqr)(A);

            puts("\n���������");
            (*print)(A);

            free(A);
            FreeLibrary((HINSTANCE)lib);

            return 0;
        }
        else if (c == 2)
        {
            void *lib = LoadLibrary("libarray.so");
            int **(*create)() = GetProcAddress((HINSTANCE)lib, "create");
            void (*print)(int*) = GetProcAddress((HINSTANCE)lib, "print");
            void (*zsqr)(int*) = GetProcAddress((HINSTANCE)lib, "zsqr");

            int *arr = create();

            puts("\n�������� ������");
            (*print)(arr);

            (*zsqr)(arr);

            puts("\n���������");
            (*print)(arr);

            free(arr);
            FreeLibrary((HINSTANCE)lib);

            return 0;
        }
        else if (c == 0)
        {
            return 0;
        }
        else
        {
            puts("�������� ����� ����!");
        }
    }
}
