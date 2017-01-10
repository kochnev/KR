#include <stdio.h>
/*
   печать таблицы температур по Фаренгейту
   и Цельсию для fahr = 0, 20 ...., 300
*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; // верхняя граница
    step = 20; //шаг

    fahr = lower;
    printf("-----------------\n");
    printf("| fahr | celsius|\n");
    printf("-----------------\n");
    while (fahr <= upper) {
      celsius = 5.0 * (fahr-32) / 9.0;
      printf("| %3.0f  | %6.2f |\n", fahr, celsius);
      fahr += step;
    }

}
