#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>

int main()
{
   
    setlocale(LC_ALL, "RUS");

    int numA, numB;

    printf("--- Задание: Жеребьевка ---\n");
    printf("Введите выпавший номер для команды A: ");
    scanf("%d", &numA);

    printf("Введите выпавший номер для команды B: ");
    scanf("%d", &numB);
    if ((numA % 2 == 0) != (numB % 2 == 0))
    {
        printf("\nПраво первого хода получено! (Ровно один из номеров четный).\n");
    }
    else
    {
        printf("\nПраво первого хода НЕ получено. (Либо оба номера четные, либо оба нечетные).\n");
    }

    return 0;
}