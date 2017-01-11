#include <stdio.h>
#define MAXLINE 10 //maximum input line

int get_line(char line[], int maxline);
void reverse(char s[], int limit);

int main()
{
    int len; //current line length

    char line[MAXLINE]; //current input line
  //  char line_reversed[MAXLINE]; //reversed input line

    while ((len = get_line(line, MAXLINE)) > 0)
    {
            reverse(line, len);
            printf("%s\n", line);
    }
    return 0;
}

//getline: read a line into s, return length
int get_line(char s[], int lim)
{
    int c, i;
    for (i=0; (i < lim-1) && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

//reverse: reverse line
void reverse(char s[], int lim)
{
     int i, j, temp;
  /*   if(s[lim] == '\0')
       putchar('0');
    else if(s[lim-1] == '\n')
       putchar('n');
    else
       putchar(s[lim-1]); */
     for (i = 0, j = lim-1; j > i; ++i, --j)
     {
         temp = s[i];
         s[i] = s[j];
         s[j] = temp;
     }
}
