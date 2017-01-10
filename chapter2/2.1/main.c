#include <stdio.h>
#include <limits.h>

int main()
{
    printf("char min: %d\n", CHAR_MIN);
    printf("char max: %d\n", UCHAR_MAX);
    printf("signed char min: %d\n", SCHAR_MIN);
    printf("signed char max: %d\n", SCHAR_MAX);

    printf("=====computed====\n");
    printf("signed char min: %d \n", ~(char)((unsigned char)~0>>1));
    printf("signed char max: %d \n", (char)((unsigned char)~0>>1));
    return 0;
}
