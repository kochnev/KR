#include <stdio.h>
/*
   печать таблицы температур по Цельсию
   и Фаренгейту для celsius = 0, 20 ...., 300
*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; // верхняя граница
    step = 20; //шаг

    celsius = lower;
    printf("--------------------\n");
    printf("| celsius | fahr   |\n");
    printf("--------------------\n");
    while (celsius <= upper) {
      fahr = 9.0 * celsius / 5.0 + 32;
      printf("| %3.0f\t  | %6.2f |\n", celsius, fahr);
      celsius += step;
    }
    printf("--------------------\n");

}
