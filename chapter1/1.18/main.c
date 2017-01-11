#include <stdio.h>
#define MAXLINE 10 //maximum input line

int get_line(char line[], int maxline);
int remove_white(char line[], int maxline);
//print longest input line
int main()
{
    int len; //current line length

    char line[MAXLINE]; //current input line

    int res; //result of function remove_white
    while ((len = get_line(line, MAXLINE)) > 0)
        if (remove_white(line, len) != 0)
            printf("%s\n", line);

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

//remove_white: remove trailing blanks and tabs from each line
//of input and delete etirely blank lines.
int remove_white(char s[], int lim)
{
    int i;
    int res = 0;
    for (i = lim-1; i >= 0; --i)
        if (s[i] == ' ' || s[i] == '\t')
            s[i] = '\0';
        else if(s[i] != '\n') {
            i = -1; //return from loop
            res = 1;
        }
    return res;
}
