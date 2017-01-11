#include <stdio.h>

int atoi(char s[]);

int main()
{
    int c, i, lim;
    lim = 100;
    char s[lim];
    for(i = 0; i<lim-1, (c=getchar())!='\n'; ++i)
         s[i] = c;

    s[i] = '\0';

    int res = atoi(s);

    printf("res = %d\n", res );

    return 0;
}

//atoi: convert s to integer
int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i){

        n = 10 * n + (s[i] - '0');
    printf("i = %d, s[i] = %c, n = %d\n", i, s[i], n );
      }
    return n;
}
