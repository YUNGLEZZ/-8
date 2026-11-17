#include <stdio.h>
#include "myarrfunc.h"
int main(void)
{
    char b;
    int arr[50] = {0};
    int n = 0, k, m;
    do
    {
        printf("a Задать размер массива\n");
        printf("b Заполнить массив\n");
        printf("c Представление массива\n");
        printf("d Определение мах.значения массива в заданном диапазоне индексов k-m\n");
        printf("e Вычисление средн.арифм. элементов в заданном диапазоне индексов k-m\n");
        printf("f Определение кол-во элементов массива, которые > k\n");
        printf("g Выход\n");
        printf("Выберите пункт: \n");
        if (scanf(" %c", &b) != 1)
        {
            break;
        }
        switch (b)
        {
        case 'a':
            size(&n);
            break;
        case 'b':
            add(arr, n);
            break;
        case 'c':
            show(arr, n);
            break;
        case 'd':
            printf("Введите k и m: \n");
            scanf("%d %d", &k, &m);
            int max = maxkm(arr, n, k, m);
            printf("%d\n", max);
            break;
        case 'e':
            printf("Введите k и m: \n");
            scanf("%d %d", &k, &m);
            double avg = avg_arif(arr, n, k, m);
            printf("%f\n", avg);
            break;
        case 'f':
            printf("Введите k и m: \n");
            scanf("%d %d", &k, &m);
            int l = kolvo(arr, n, k);
            printf("%d\n", l);
            break;
        default:
            printf("Ошибка\n");
            break;
        }
    } while (b != 'g');
    return 0;
}