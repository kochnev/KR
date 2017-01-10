#include <stdio.h>
#define MAXLINE 10 /*максимальный размер вводимой строки*/

int get_line(char s[], int lim);
void copy(char to[], char from[]);

/*печать самой длинной строки*/
int main()
{
    int len; /*длина текущей строки*/
    int tmp; //длина части строки
    int max; /*длина максимальной из просмотренных строк*/
    char line[MAXLINE]; /*текущая строка*/
    char longest[MAXLINE];/*самая длинная строка*/


    max = 0;
    len = 0;
     while ((tmp = get_line(line, MAXLINE)) > 0) {
         len += tmp;
         if (tmp != MAXLINE-1) {
             if (len > max) {
                 max = len;
                 copy(longest, line);
             }
             len = 0;
         }
     }
    if (max > 0) /*была ли хоть одна строка?*/
        printf("%d: %s", max, longest);
    return 0;
}

/*getline: читает строку в s, возвращает длину*/
int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0;  i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;


    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/*copy: копирует из 'from' в 'to'; to достаточно большой*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from [i]) != '\0')
        ++i;
}
