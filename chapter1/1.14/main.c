#include <stdio.h>

#define ARRAYSIZE 128
//подсчет строк, слов и симвлов
void main()
{
    int c, i, j;
    int ndigit[ARRAYSIZE];


    for (i = 0; i < ARRAYSIZE; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        ndigit[c] += 1;
        //printf("%d\n", ndigit['c'] );
    }
    for (i = 0; i < ARRAYSIZE; ++i) {
        printf("%d (%c): ", i, i);

        for (j = 0; j< ndigit[i]; ++j)
            putchar('*');

        putchar('\n');
    }
      // else if (c == ' ' || c == '\n' || c == '\t')



}
