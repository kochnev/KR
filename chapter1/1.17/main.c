#include <stdio.h>
#define SIZE 1000 //maximum input line
#define SIZE_LINE 80 //length of line to print
int get_text(char s[], int lim);
int get_next_line(char s[], int start, int lim);
//print longest input line
int main()
{
    int c, i, j, k;
    int len_text = 0; // length of full text
    int len = 0;      // length of one line
    char input[SIZE]; // input text
    char line[SIZE];  // one line

    len_text = get_text(input, SIZE);

    j = 0;
    for (i = 0; i < len_text; ++i)
    {
        c = input[i];
        if (c != '\n') {
            line[j] = c;
            ++j;
        }
        else {
            line[j] = c; //сохраняем символ переодва строки в массив
            if (j > SIZE_LINE)
                for (k = 0; k <= j; ++k)
                    putchar(line[k]);
            j = 0;
        }

    }



    return 0;
}

//get_text: read a text into s, return length
int get_text(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim && (c=getchar())!=EOF; ++i)
            s[i] = c;

    return i;
}
