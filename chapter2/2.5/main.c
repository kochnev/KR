#include <stdio.h>

//void squeeze(char s[], int c);
//void squeeze(char s1[], char s2[]);
int any(char s1[], char s2[]);
void get_line(char s[], int lim);
//test
int main()
{
    int c, i, lim;
    lim = 100;
    char s1[lim];
    char s2[lim];

    printf("input char array1: ");
    get_line(s1, lim);

    printf("input char array2: ");
    get_line(s2, lim);

  //  printf("input char to delete: ");
  //  c = getchar();

    printf("result = %d\n",   any(s1, s2));

    return 0;
}

//getline: read a line into s, return length
void get_line(char s[], int lim)
{
    int c, i;
    for (i=0; (i < lim-1) && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    //return i;
}
//any: returns the first location in the string s1 where any character from the string s2 occurs,
// or -1 if s1 contains no characters from s2
int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i)
        for (j = 0; s2[j] != '\0'; ++j)
            if (s1[i] == s2[j] && s1[i]!='\n')
                return i;

    return -1;

}
//squeeze: delete all c from s
/*void squeeze(char s1[], char s2[])
{
    int i, j, k;
    int needToDelete = 0;
    for (i = j = 0; s1[i] != '\0'; i++)
    {
        needToDelete = 0;
        for (k = 0; s2[k] != '\0'; k++)
            if (s1[i] == s2[k])
                needToDelete = 1;


        if (!needToDelete)
            s1[j++] = s1[i];

    }
      s1[j] = '\0';
}*/
/*void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];

    s[j] = '\0';

}*/
